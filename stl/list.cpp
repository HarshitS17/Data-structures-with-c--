#include <iostream>
#include <list>

using namespace std;
int main()
{
    list<int> name; //  'name' naam ki bna de list bna di

    name.push_back(1);
    name.push_back(2);

    cout << "before erasing :" << endl;
    for (int i : name)
    {
        cout << i << endl;
    }
    name.erase(name.begin());
    cout << "after erasing :" << endl;
    for (int i : name)
    {
        cout << i << endl;
    }
}
/*
some basic funcitons we can do :
name.pop_back();
name.pop_front();
name.empty();
name.size();
*/
