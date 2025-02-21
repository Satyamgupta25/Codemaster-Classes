/*4. **Finding the Least Common Multiple (LCM)**
    
    **Difficulty**: Easy
    
    **Topics**: Basic Programming, Number Theory
    
    **Description**: Write a program to find the LCM of two numbers.
    
    **Example**:
    
    Input: `a = 12, b = 15`
    
    Output: `60`
    
    Explanation: The LCM of 12 and 15 is 60.
    */
   #include <iostream>  
    using namespace std;
    int main()
    {int a,b;
     cout<<"enter the two numbers to get their LCM"<<endl;
     cin>>a>>b;
     int max=(a>b)?a:b;
     while(1)
     {if(max%a==0 && max%b==0)
      {cout<<"the LCM of the two numbers is "<<max<<endl;
       break;
      }
      max++;
     }
     return 0;
    }