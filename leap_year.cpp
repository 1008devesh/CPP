#include<iostream>
using namespace std;
void leap(int number)
{
    if(number%400==0)
    {
        cout<<"Leap year\n";
    }
    else if(number%4==0 && number%100!=0)
    {
        cout<<"Leap Year\n";
    }
    else
    {
        cout<<"Not Leap Year\n";
    }
}
int main()
{
int year;
cout<<"Enter the year\n";
cin>>year;
leap(year);
cout<<INT32_MAX;
cout<<INT32_MIN;
};
 