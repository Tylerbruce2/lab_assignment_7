#include <stdio.h>

// Function to perform bubble sort
void bubbleSort(int arr[], int n, int swaps[]) {
    int i, j, temp, totalSwaps = 0;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swaps[arr[j]]++;
                swaps[arr[j + 1]]++;
                totalSwaps += 1;
            }
        }
    }
    printf("Total number of swaps: %d\n", totalSwaps);
}

// Function to perform selection sort
// Can't get my selectionsort to work
void selectionSort(int arr[], int n, int swaps[]) {
    int i, j, min_idx, temp, totalSwaps = 0;
    for (i = 0; i < n - 1; i++) {
        min_idx = i;
        for (j = i + 1; j < n; j++) {
        if (arr[j] < arr[min_idx])
             min_idx = j;
        }
        temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
        swaps[arr[min_idx]]++;
        swaps[arr[i]]++;
        totalSwaps += 1;
    }
    printf("Total number of swaps: %d\n", totalSwaps);
}

int main() {

    // Given arrays
    int array1[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
    int array2[] = {90, 80, 70, 60, 50, 40, 30, 20, 10};
    int n = 9;


    int swaps1[100] = {0};
    int swaps2[100] = {0};

    // Bubble sort outputs
    printf("array1 bubble sort:\n");
    bubbleSort(array1, n, swaps1);
    for (int i = 0; i < n; i++) {
        printf("%d: %d\n", array1[i], swaps1[array1[i]]);
    }

    printf("\narray2 bubble sort:\n");
    bubbleSort(array2, n, swaps2);
    for (int i = 0; i < n; i++) {
        printf("%d: %d\n", array2[i], swaps2[array2[i]]);
    }

    // Selection sort outputs
    printf("\narray1 selection sort:\n");
    selectionSort(array1, n, swaps1);
    for (int i = 0; i < n; i++) {
        printf("%d: %d\n", array1[i], swaps1[array1[i]]);
    }

    printf("\narray2 selection sort:\n");
    selectionSort(array2, n, swaps2);
    for (int i = 0; i < n; i++) {
        printf("%d: %d\n", array2[i], swaps2[array2[i]]);
    }

    return 0;
}
