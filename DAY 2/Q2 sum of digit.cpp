/*2. **Summing Digits of a Number**
    
    **Difficulty**: Easy
    
    **Topics**: Basic Programming, Mathematical Computations
    
    **Description**: Write a program to calculate the sum of digits of a number.
    
    **Example**:
    
    Input: `number = 1234`
    
    Output: `10`
    
    Explanation: The sum of the digits 1 + 2 + 3 + 4 = 10.
    */
#include <iostream>
using namespace std;
int main()
{int num,sum=0;
 cout<<"enter the number to get the sum of its digits"<<endl;
 cin>>num;
 while(num>0)
 {sum=sum+num%10;
  num=num/10;
 }
 cout<<"the sum of the digits is "<<sum<<endl;
 return 0;
}