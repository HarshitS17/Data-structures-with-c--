#include <iostream>
using namespace std;
// binary search :
// it is for the sorted arrays only
//worst case time complexity --> BigO(log n)
//  step 1 -> find middle
//  step 2 -> compare the middle with the kery or target
//  step 3 -> if middle is equal to target then return middle
//  step 4 -> nhi to jis side bda hai udha step 1 ,2,3 repeat kro
int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid;

    for (int i = 0; i <= size; i++)
    {
        mid = (start + end) / 2; // midpoint
        if (arr[mid] == key)     // condition if the target is at the mid
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1; // condition of the mid is smaller than the key , then start = mid +1 , and the loop will reject the the elements  smaller than mid
        }
        else
        {
            end = mid - 1; // then yeh left waale part mei jayega
        }
    }
    return -1; // kuch nhi mila
}
int main()
{
    int even[6] = {2, 4, 6, 8, 12, 18};
    int odd[5] = {3, 8, 11, 14, 16};
    int key = 8;
    int index = binarySearch(even, 6, 12);
    cout << index;
}


