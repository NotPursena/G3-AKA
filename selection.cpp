#include <bits/stdc++.h>
using namespace std;

// Selection Sort function
void selectionSort(int array[], int size)
{
    for (int i = 0; i < size - 1; i++) {
        // Find the minimum element in unsorted array
        int minIndex = i;
        for (int j = i + 1; j < size; j++)
            if (array[j] < array[minIndex])
                minIndex = j;

        // Swap the found minimum element with the first element
        swap(array[minIndex], array[i]);
    }
}

// UTILITY FUNCTIONS
// Function to print an array
void printArray(int A[], int size)
{
    for (int i = 0; i < size; i++)
        cout << A[i] << " ";
    cout << endl;
}

// Driver code
int main()
{
    int arr[] = { 12, 11, 13, 5, 6, 7 };
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    cout << "Given array is \n";
    printArray(arr, arr_size);

    selectionSort(arr, arr_size);

    cout << "\nSorted array is \n";
    printArray(arr, arr_size);

    return 0;
}