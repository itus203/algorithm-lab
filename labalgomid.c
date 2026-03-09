#include <stdio.h>

// Linear Search
int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key)
            return i;
    }
    return -1;
}

// Binary Search (for sorted array)
int binarySearch(int arr[], int n, int key) {
    int low = 0, high = n - 1, mid;

    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

// Selection Sort
void selectionSort(int arr[], int n) {
    int min, temp;

    for (int i = 0; i < n - 1; i++) {
        min = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min])
                min = j;
        }
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}

// Insertion Sort
void insertionSort(int arr[], int n) {
    int key, j;

    for (int i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int n, key, result;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr1[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter value to search: ");
    scanf("%d", &key);

    result = linearSearch(arr1, n, key);
    if (result != -1)
        printf("Linear Search: Element found at index %d\n", result);
    else
        printf("Linear Search: Element not found\n");

    selectionSort(arr1, n);
    printf("After Selection Sort: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr1[i]);
    printf("\n");

    result = binarySearch(arr1, n, key);
    if (result != -1)
        printf("Binary Search: Element found at index %d\n", result);
    else
        printf("Binary Search: Element not found\n");

    int arr2[n];
    for (int i = 0; i < n; i++)
        arr2[i] = arr1[i];

    insertionSort(arr2, n);
    printf("After Insertion Sort: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr2[i]);

    return 0;
}
