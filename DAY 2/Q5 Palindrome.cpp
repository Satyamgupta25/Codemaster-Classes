/*5. **Identifying Palindromes**
    
    **Difficulty**: Easy
    
    **Topics**: Basic Programming
    
    **Description**: Write a program to check if  or number is a palindrome.
    
    **Example**:
    
    Input: `n=121`
    
    Output: `Palindrome`
    
    Explanation: 121 reads the same backward as forward.
    */
#include <iostream>
using namespace std;
int main()
{int n,rev=0,rem,temp;
 cout<<"enter the number to check if it is a palindrome"<<endl;
 cin>>n;
 temp=n;
 while(n>0)
 {rem=n%10;
  rev=rev*10+rem;
  n=n/10;
 }
 if(temp==rev)
 cout<<"the number is a palindrome"<<endl;
 else
 cout<<"the number is not a palindrome"<<endl;
 return 0;
}