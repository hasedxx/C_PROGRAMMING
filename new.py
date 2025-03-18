import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
from sklearn.preprocessing import LabelEncoder, StandardScaler
from sklearn.model_selection import train_test_split
from sklearn.neural_network import MLPClassifier
import sqlite3
import warnings

# Ignore warnings for cleaner output
warnings.filterwarnings("ignore")

DB_FILE = "expenses.db"

# Step 1: Initialize Database
def initialize_db():
    conn = sqlite3.connect(DB_FILE)
    cursor = conn.cursor()
    cursor.execute("""
        CREATE TABLE IF NOT EXISTS expenses (
            id INTEGER PRIMARY KEY AUTOINCREMENT,
            category TEXT,
            amount REAL
        )
    """)
    conn.commit()
    conn.close()

# Step 2: Add Expense (User Input)
def add_expense():
    category = input("Enter expense category (Food, Travel, Shopping, etc.): ").strip()
    amount = float(input("Enter amount spent: ").strip())

    conn = sqlite3.connect(DB_FILE)
    cursor = conn.cursor()
    cursor.execute("INSERT INTO expenses (category, amount) VALUES (?, ?)", (category, amount))
    conn.commit()
    conn.close()
    print("✅ Expense Added!")

# Step 3: Preprocessing
def preprocess_data():
    conn = sqlite3.connect(DB_FILE)
    df = pd.read_sql_query("SELECT * FROM expenses", conn)
    conn.close()

    if df.empty:
        print("No expenses found. Add some data first.")
        return None, None, None

    label_encoder = LabelEncoder()
    df['Category_Encoded'] = label_encoder.fit_transform(df['category'])

    scaler = StandardScaler()
    df['Amount_Scaled'] = scaler.fit_transform(df[['amount']])

    return df, label_encoder, scaler

# Step 4: Train ML Model
def train_model(df):
    if df is None:
        return None

    X = df[['Amount_Scaled']].values
    y = df['Category_Encoded'].values

    X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=0.2, random_state=42)

    model = MLPClassifier(hidden_layer_sizes=(8, 8), activation='relu', solver='adam', max_iter=1000)
    model.fit(X_train, y_train)
    print("✅ Model trained successfully!")
    return model

# Step 5: Classify New Expense
def classify_expense(model, scaler, label_encoder):
    amount = float(input("Enter an amount to predict category: ").strip())
    amount_scaled = scaler.transform(np.array(amount).reshape(-1, 1))
    prediction = model.predict(amount_scaled)
    predicted_category = label_encoder.inverse_transform(prediction)[0]
    print(f"🔹 Predicted Category: {predicted_category}")

# Step 6: Visualization
def visualize_spending():
    conn = sqlite3.connect(DB_FILE)
    df = pd.read_sql_query("SELECT category, SUM(amount) as total_spent FROM expenses GROUP BY category", conn)
    conn.close()

    if df.empty:
        print("No data available for visualization.")
        return

    plt.figure(figsize=(8, 5))
    plt.bar(df['category'], df['total_spent'], color='skyblue')
    plt.xlabel("Category")
    plt.ylabel("Total Amount Spent")
    plt.title("📊 Spending by Category")
    plt.xticks(rotation=45)
    plt.show()

# Step 7: Main Menu
def main():
    initialize_db()

    while True:
        print("\n🔹 Expense Tracker Menu:")
        print("1️⃣ Add Expense")
        print("2️⃣ Train Model")
        print("3️⃣ Classify Expense")
        print("4️⃣ Visualize Spending")
        print("5️⃣ Exit")

        choice = input("Enter your choice: ").strip()

        if choice == "1":
            add_expense()
        elif choice == "2":
            df, encoder, scaler = preprocess_data()
            global model
            model = train_model(df)
        elif choice == "3":
            if model:
                classify_expense(model, scaler, encoder)
            else:
                print("⚠️ Train the model first by selecting option 2.")
        elif choice == "4":
            visualize_spending()
        elif choice == "5":
            print("👋 Exiting Expense Tracker.")
            break
        else:
            print("❌ Invalid choice! Please try again.")

if __name__ == "__main__":
    model = None  # Initialize model as None
    main()
