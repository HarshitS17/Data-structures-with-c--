#include <iostream>
using namespace std;

// recursion -> whehn a fucnction calls itself drectly or indrirectly

// factorial using recursion
// 5!= 5x4!
// recursion eqation-: function(n)= n x function(n-1)

int factorial(int n)
{
    // base code  -> is the simplest instance of the problem that can be solved directly, without further recursive calls.
    if (n == 0)
        return 1; // return likhna manditory hai
                  // base case tells where to stop nhi to segmentaton fault a jayega

    return n * factorial(n - 1);
}

int main()
{
    int n;
    cin >> n;
    int answer = factorial(n);
    cout << answer << endl;
}