/* 2. **Checking for Prime Numbers**
    
    **Difficulty**: Easy
    
    **Topics**: Basic Programming, Number Theory
    
    **Description**: Write a program to determine if a number is prime.
    
    **Example**:
    
    Input: `number = 7`
    
    Output: `Prime`
    
    Explanation: 7 has no divisors other than 1 and itself, so it is a prime number.
   
    */

   #include<iostream>
   using namespace std;
   
   int main()
   {int flag=1;
   int user_inp;
   cout<<"enter a number to check prime and non prime"<<endl;
   cin>>user_inp;
    for(int i=2;i<user_inp;i++){
        if(user_inp%i==0)
        {flag=0;}
    }
    if(flag){
        cout<<"it is prime number"<<endl;
    }
    else{
        cout<<"not a prime";}
        
    return 0;
   }