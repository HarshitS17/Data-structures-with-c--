#include <iostream>
#include <stack>
using namespace std;

int minimumBox(int arr[], int n)
{
    // loop for replacing every second box with 0
    for (int i = 1; i < n; i += 2)
    {
        arr[i] = 0;
    }

    stack<int> st;
    st.push(arr[0]);

    // traversing the array adn then counting the boxes
    for (int i = 1; i < n; i++)
    {
        int now = st.top();

        // If the current box is bigger or equal to twice the top box
        // then the top box is no longer visible
        if (arr[i] >= 2 * now)
        {
            st.pop();
        }

        st.push(arr[i]); // Pushing  the current box to the stack
    }

    // The size of the stack represents the number of visible boxes
    return st.size(); // as size of the stack = number of visible boxes
}

int main()
{
    int arr[] = {4, 1, 2, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "The Minimum number of visible boxes: " << minimumBox(arr, n) << endl;

    return 0;
}
