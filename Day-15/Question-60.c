//Write a program to Move zeroes to end
#include <stdio.h>
int main() {
    int arr[] = {1, 0, 2, 0, 3, 0, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[count] = arr[i];
            count++;
        }
    }
    while (count < n) {
        arr[count] = 0;
        count++;
    }
    printf("Array after moving zeros to the end:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}