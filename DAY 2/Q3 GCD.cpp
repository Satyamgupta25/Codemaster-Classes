/*3. **Finding the Greatest Common Divisor (GCD)**
    
    **Difficulty**: Easy
    
    **Topics**: Basic Programming, Number Theory
    
    **Description**: Write a program to find the GCD of two numbers.
    
    **Example**:
    
    Input: `a = 48, b = 18`
    
    Output: `6`
    
    Explanation: The GCD of 48 and 18 is 6.
    */
#include <iostream> 
using namespace std;
int main()
{int a,b;
 cout<<"enter the two numbers to get their GCD"<<endl;
 cin>>a>>b;
 while(a!=b)
 {if(a>b)
  a=a-b;
  else
  b=b-a;
 }
 cout<<"the GCD of the two numbers is "<<a<<endl;
 return 0;
} 