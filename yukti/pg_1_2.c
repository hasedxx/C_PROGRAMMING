#include <stdio.h>

int main() {
    int n, pos;
    printf("Enter the number of elements of the array = ");
    scanf("%d", &n);
    
    int arr[n];
    
    for (int i = 0; i < n; i++) {
        printf("Enter element %d = ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the position to delete (1 to %d) = ", n);
    scanf("%d", &pos);
    
    
    
    for (int i = pos - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    
    printf("Updated array: ");
    for (int i = 0; i < n - 1; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
