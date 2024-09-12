#include <iostream>
using namespace std;

// int main()
// {
//     /* we have to print a patter like following :
//     A A A
//     B B B
//     C C C
//     */
//     // we will use the relation : A+i+1
//     int n;
//     cout << "enter the number of rows you want ";
//     cin >> n;
//     for (int row = 1; row <= n; row++)
//     {
//         for (int col = 1; col <= n; col++)
//         {
//             char ch = 'A' + row - 1; // this is the relation to print the abcd patrern
//             cout << ch;
//         }
//         cout << endl;
//     }
// }

// /*pattern :
// A B C
// A B C
// A B C
// */
// int main()
// {
//     int n;
//     cout << "enter the number of rows ";
//     cin >> n;
//     for (int row = 1; row <= n; row++)
//     {
//         for (int col = 1; col <= n; col++)
//         {
//             char ch = 'A' + col - 1; // this ist the relation to print the abcd patern
//             cout << ch << " ";
//         }
//         cout<< endl;
//     }
// }

/*
pattern :
A B C
D E F
G H I
*/
int main()
{
    int n;
    cout << " enter the number of rows of pattern you want ";
    cin >> n;
    char ch = 'A';

    // loop for rows
    for (int row = 1; row <= n; row++)
    {
        // loop for columns
        for (int col = 1; col <= n; col++)
        {
            cout << ch;
            ch++; // here the relation to print the alphabets :   A = A+1
        }
        cout << endl;
    }
}