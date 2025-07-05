#include <stdio.h>

int binarySearch(int arr[], int size, int target) {
    int low = 0, high = size - 1;

    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == target)
            return mid;  // Target found
        else if (arr[mid] < target)
            low = mid + 1;  // Search right half
        else
            high = mid - 1;  // Search left half
    }
    return -1;  // Target not found
}
int main() {
    int arr[] = {5, 10, 15, 20, 25, 30, 35};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target ;  
    printf("enter a number to search:");
scanf("%d",& target);
    int result = binarySearch(arr, size, target);

    if (result != -1)
        printf("Element %d found at index %d\n", target, result);
    else
        printf("Element %d not found in the array\n", target);

    return 0;
}