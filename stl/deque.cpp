#include <iostream>
#include <deque>
using namespace std;
// deque --> doubly ended queue
//       --> yeh bhi dynamic hota hai 
int main()
{
    deque<int> name;

    name.push_back(1);   // to enter elements form back
    name.push_front(23); // to to enter elements form front
    name.push_back(69);
    name.push_front(45);
    cout << "the size is : " << name.size() << endl;           // to check the size
    cout << "the first element is : " << name.front() << endl; // to check the first element
    cout << "the last element is : " << name.back() << endl;   // to check the last element
    name.pop_front();                                          // to remove the first element
    name.pop_back();                                           // to remove the last element

    for (int i : name)
    {
        cout << i << endl;
    }
    cout << "Empty or not : " << name.empty() << endl; // to check whether the queue is empty or not
    cout << "size before erase  : " << name.size() << endl;
    name.erase(name.begin()+1); // to erase (but you have to tell ki kitna krna hai erase )
    cout<<"after erase :"<<name.size()<<endl;
    for(int i:name){
        cout<<i<<endl;
    }
    
}