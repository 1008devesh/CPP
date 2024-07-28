#include<iostream>
using namespace std;
int main()
{
    int number;
    cout<<"Enter the number";
    cin>>number;
int rem,ans=0,mul=1;
while(number>0)
{
    rem=number%2;
    number=number/2;
    ans=rem*mul+ans;
    mul=mul*10;
}
cout<<" The Binary of the number  is"<<ans;
}