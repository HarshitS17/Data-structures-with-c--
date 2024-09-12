#include <iostream>
#include <array> // liberary to use arrys and operations on array
using namespace std;
int main()
{
    int arr[5] = {1, 2, 3, 4};

    array<int, 4> name = {1, 43, 24, 45}; // syntax of using array liberary for array initialization

    // to get the size of the array

    int size = name.size(); // size function

    for (int i = 0; i < size; i++)
    {
         cout<<name[i]<<endl; 
    }

// at function --> use for command by index of the element 
cout<<"The element at 2nd index is "<<name.at(2)<<endl;

// empty funtion -> tells wether the array is empty or not 
cout<<"empty or not : "<<name.empty()<<endl;


// Front  --> function to print the first elemnent of the array 
cout<<"first element of the array is : "<<name.front()<<endl;

// Back --> function to print the last element of the array 
cout <<"the last element of the array is : "<<name.back()<<endl;
}
