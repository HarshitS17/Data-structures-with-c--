#include <iostream>
using namespace std;
// we have to print coutning in rows and column
int main()
{
    int n;
    cout << "Enter the number of rows  : ";
    cin >> n;
    int count = 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
}