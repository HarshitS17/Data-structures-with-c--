#include <iostream>
#include <queue>
using namespace std;
// based on FIFO: First In First Out

int main()
{
    queue<string> name;

    name.push("Harshit ");
    name.push("Saini");

    cout<<"First Element :"<<name.front()<<endl; // to print the first element
    name.pop();
    cout<<"First Element after pop :"<<name.front()<<endl;
    

}