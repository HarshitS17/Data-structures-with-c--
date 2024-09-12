#include <iostream>
#include <vector>
using namespace std;

// Vector --> dynamic array
int main()
{
    vector<int> name;
    // capacity --> tells the total memeory allocated to it
    cout << "capacity --> " << name.capacity() << endl;

    // push back --> puts the  element in it

    name.push_back(1);
    cout << "capacity --> " << name.capacity() << endl;

    name.push_back(15);
    cout << "capacity --> " << name.capacity() << endl;

    cout << "Size --> " << name.size() << endl;

    cout << "element at 2nd Index :" << name.at(1) << endl; // at funtion for perating indeces

    cout << "first element of the array is : " << name.front() << endl; // fornt fn for frst element
    cout << "last element of the array is : " << name.back() << endl;   // back fn for last element

    // pop_back --> will remove or delete the last element :
    name.pop_back();
    cout << "after popback -:" << endl;
    for (int i : name)
    {
        cout << name[i] << endl;
    }

    // Clear --> used to clear all the elements (capacity remains the same)
    cout << "berfore clear  : " << name.size() << endl;
    name.clear();
    cout << "after clear  : " << name.size() << endl;
}
