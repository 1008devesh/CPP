#include<iostream>
using namespace std;
int main()
{
int number,rem,sum=0;
cout<<"Enter the number\n";
cin>>number;
while(number>0)
{
rem=number%10;
number=number/10;
sum=sum+rem;
}
cout<<"Sum of the digits of the number is"<<sum;

};