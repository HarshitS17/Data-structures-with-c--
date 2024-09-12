#include <iostream>
using namespace std;
// we'll be making a pattern of counting 1 2 3 4
/*example = 1 2 3
            1 2 3
            1 2 3
*/
int main()
{
    int n;
    cout << " Enter the number of lines u want to print the pattern ";
    cin >> n;
    for (int i = 0; i < n; i++)// our first loop will be for the numbers of rows , i=rows, it tells the nuumber of times the coutings have to run 
    {
        for (int j = 0; j < n; j++)//this is for the counting 
        {
            cout << j;
        }
        cout << endl; // to move on to the next line when the j reaches n 
    }
}