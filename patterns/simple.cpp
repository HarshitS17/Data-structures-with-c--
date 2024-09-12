#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<" enter the numer times you watn to print the pattern of *";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << "*";
        }
    cout << endl;
  
    }
}
