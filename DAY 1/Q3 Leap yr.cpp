/*3. **Validating Leap Years**

    **Difficulty**: Easy

    **Topics**: Basic Programming, Date Handling

    **Description**: Write a program to check if a given year is a leap year.

    **Example**:

    Input: `year = 2020`

    Output: `Leap Year`

    Explanation: 2020 is divisible by 4 but not by 100, or it is divisible by 400, so it is a leap year.
    */

#include <iostream>
using namespace std;

int main()
{
    int usr_in;
    cout << "enter the year to check leap or not" << endl;
    cin >> usr_in;
    if (usr_in > 0)
    {
        if ((usr_in % 4 == 0 && usr_in % 100 != 0) || (usr_in % 100 == 0 && usr_in % 400 == 0))
        {
            cout << usr_in << "is leap year" << endl;
        }
        else
        {
            cout << "not a leap year" << endl;
        }
    }
    else
    {
        cout << "enter number greater than 0" << endl;
    }
    return 0;
}