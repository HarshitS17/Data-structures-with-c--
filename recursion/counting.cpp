// Printing counting
#include <iostream>
using namespace std;

void print(int n)
{
    // base case -> jaha aake yeh stop ho jaaye
    if (n == 0)
    {
        return;
    }
    cout << n << endl;
    print(n - 1);// logic part 
}

int main()
{
    int n;
    cin >> n;
    cout << endl;
    print(n);
    
}