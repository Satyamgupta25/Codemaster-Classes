/*1. **Finding the Factorial of a Number**
    
    **Difficulty**: Easy
    
    **Topics**: Basic Programming, Mathematical Computations
    
    **Description**: Write a program to compute the factorial of a given number.
    
    **Example**:
    
    Input: `number = 5`
    
    Output: `120`
    
    Explanation: 5! (factorial) is 5 × 4 × 3 × 2 × 1 = 120.
    */

   #include <iostream>
   using namespace std;
   int main()
   {int num,factor=1;
    cout<<"enter the number to get its factorial"<<endl;
    cin>>num;
    for(int i=1;i>=num;i++)
    {if(num%i==0)
    {
        factor=factor*i;
    }}
    cout<<"the factorial of "<<num<<" is "<< factor<<endl;
    return 0;
   }