#include <iostream>
using namespace std;

// MERGE SORT
//  -> implementation of recursion

// dividing the array and then merging them after sorting
void merge(int *arr, int start, int end)
{
    int mid = (start + end) / 2;

    int len1 = (mid - start + 1);
    int len2 = (end - mid);

    // allocating new arrays to copy the divided arrays

    int *first = new int[len1];
    int *second = new int[len2];

    int mainArrayIndex = start;    // variable for copying
    for (int i = 0; i < len1; i++) // copying the first part of the divided array to new array
    {
        first[i] = arr[mainArrayIndex++];
    }

    mainArrayIndex = mid + 1;
    for (int i = 0; i < len2; i++) // loop for copying the second half to a new array
    {
        second[i] = arr[mainArrayIndex++];
    }

    // merging the two sorted arrays
    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = start;

    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] < second[index2])
        {
            arr[mainArrayIndex++] = first[index1++];
        }
        else
        {
            arr[mainArrayIndex++] = second[index2++];
        }
    }
    //  copy remaining elements of first, if any
    while (index1 < len1)
    {
        arr[mainArrayIndex++] = first[index1++];
    }  
    // copy remaining elements of second , if any 
    while (index2 < len2)
    {
        arr[mainArrayIndex++] = second[index2++];
    }
    // Deallocate the memory
    delete[] first;
    delete[] second;
}

void mergesort(int *arr, int start, int end)
{
    // base case
    if (start >= end)
    {
        return;
    }

    int mid = (start + end) / 2;

    // left part :
    mergesort(arr, start, mid);

    // right part ;
    mergesort(arr, mid + 1, end);

    // merging
    merge(arr, start, end);
}

int main()
{
    int arr[] = {12, 23, 2, 41, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    mergesort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}
