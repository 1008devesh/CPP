#include<iostream>
using namespace std;
bool is_palindrome(string s1)
{
    int start=0,end=s1.size()-1;
    while(start<end)
    {
        if(s1[start]!=s1[end])
        {
            return 0;
        }
        start++,end--;
    }
    return 1;
}
int main()
{
    string s;
    cout<<"Enter the String  ";
    getline(cin,s);
    
    int k=is_palindrome(s);
    if(k==0)
    cout<<"String is not Palindrome"<<endl;
    else
    cout<<"String is palindrome";
}