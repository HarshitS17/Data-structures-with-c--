#include <iostream>
using namespace std;
/*
int main()
{
    int n;
    char star = '*';
    cout << "enter the number of the rows of pattern : ";
    cin >> n;
    // loop to run the number of rows
    for (int row = 0; row <= n; row++) // the number of rows remains the same as the iteration

    {
        // for number of times star is to be printed in the cloumn
        for (int col = 0; col < row; col++) // the number of columns will be printed till rows , as it is the same
        {
            cout << star;
        }

        cout << endl;
    }
}
*/
// ab ek different kind of pattern
// jitni baar row hai utna hi column pe print  krna hai
/*
{
    int n;
    cout << " enter the number of rows ";
    cin >> n;

    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col <= row; col++)
        {
            cout << row;
        }
        cout << endl;
    }
}
*/
// ab writtinga a pattern in a triangle
/*  int main()
{
    int n;
    cout << " enter the numbers of rows :";
    cin >> n;
    // cout << " enter the  number of counts :";
    // cin >> count;
    int count= 1 ;
    // loop for the rows
    for (int row = 1; row <= n; row++)
    {
        // loop for the columns
        for (int col = 1; col < row; col++)
        {
            cout<<count;
            count++;

        cout << endl;
    }
}*/

/*  ques : print the following pattern
example :
1
23
345
4567
*/
int main()
{

    int n;
    cout << " enter the number of rows ";
    cin >> n;

    // loop for rows
    for (int row = 1; row <= n; row++) // we can see in the pattern that the row is stating with the iteration numbners itself
    {
        int value = row;
        // loop for columns
        for (int col = 1; col <= row; col++)
        {
            cout << value; // printing the iteration of row
            value++;       // and then increasing it for next line
        }
        cout << endl;
    }
}
