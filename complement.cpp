#include<iostream>
using namespace std;
int complement(int number)
{
    if(number==0)
    return 1;
    int rem,ans=0,mul=1;
    while(number)
    {
        rem=number%2;
        if(rem==1)
        {
            rem=0;
        }
        else{
            rem=1;
        }
        number/=2;
        ans=rem*mul+ans;
        mul=mul*2;
    }
    return ans;
}
int main()
{
    int num;
    cout<<"Enter the number\n";
     cin>>num;
    cout<<"the complement of the number "<<num<<"is  "<<complement(num);
    // Swap without using third variable 
    //int a=9,b=6;
    //a=a+b;
    //b=a-b;
    //a=a-b;
   // a=a^b;
    //b=a^b;
    //a=a^b;
    //cout<<a<<endl<<b;
    
}