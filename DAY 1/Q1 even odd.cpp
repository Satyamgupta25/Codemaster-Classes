/*1. **Determining Even/Odd Numbers**

    **Difficulty**: Easy

    **Topics**: Basic Programming

    **Description**: Write a program to check whether a number is even or odd.

    **Example**:

    Input: `number = 4`

    Output: `Even`

    Explanation: Since 4 is divisible by 2, it is an even number.
    */
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number to check odd or even" << endl;
    cin >> n;
    if (n > 0)
    {
        if (n % 2 == 0)
        {
            cout << "number is even"<<endl;
        }
        else
        {
            cout << "number is odd"<<endl;
        }
    }
    else
    {
        cout << "please enter value greater than 0" << endl;
    }
    return 0;
}
