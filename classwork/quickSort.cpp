#include <iostream>
using namespace std;

// Function to swap two elements
void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

// Partition function that places the pivot element at its correct position
int partition(int arr[], int low, int high) {
    int pivot = arr[high];  // Choose the last element as pivot
    int i = low - 1;        // Index of smaller element

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);  // Swap if the current element is smaller than the pivot
        }
    }
    swap(arr[i + 1], arr[high]);  // Place the pivot in the correct position
    return i + 1;                 // Return the partitioning index
}

// QuickSort function
void quick_sort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);  // Partition the array

        quick_sort(arr, low, pi - 1);  // Recursively sort elements before partition
        quick_sort(arr, pi + 1, high); // Recursively sort elements after partition
    }
}

int main() {
    int arr[] = {38, 27, 43, 3, 9, 82, 10};
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < arr_size; i++)
        cout << arr[i] << " ";
    cout << endl;

    quick_sort(arr, 0, arr_size - 1);  // Perform quicksort

    cout << "Sorted array: ";
    for (int i = 0; i < arr_size; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
