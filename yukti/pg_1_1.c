#include <stdio.h>

int main() {
    int n, pos, value;
    printf("Enter the number of elements of the array = ");
    scanf("%d", &n);
    
    int arr[n];
    
    for (int i = 0; i < n; i++) {
        printf("Enter element %d = ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the position to insert (1 to %d) = ", n);
    scanf("%d", &pos);
    
    
    printf("Enter the value to insert = ");
    scanf("%d", &value);
    
    
    arr[pos] = value;
    
    printf("Updated array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
