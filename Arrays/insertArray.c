#include <stdio.h>
#include <string.h>

int main() {
    int n = 4;
    int arr[] = {10, 20, 30, 40, 0};
    int ele = 50;
    int pos = 2;

    printf("Array before insertion\n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    for(int i = n; i >= pos; i--)	// Shifting elements to the right
        arr[i] = arr[i - 1];
    arr[pos - 1] = ele;			    // Insert the new element at index pos - 1

    printf("\nArray after insertion\n");
    for (int i = 0; i <= n; i++)
        printf("%d ", arr[i]);
        
    return 0;
}