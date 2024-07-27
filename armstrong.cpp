#include<iostream>
using namespace std;
int countDigit(int n)
{
    int count=0;
    while(n)
    {
        count++;
        n=n/10;
    }
    return count;
}
int pow(int number,int digit)
{
    int answer=1;
    while(digit>0)
    {
        digit--;
        answer=answer*number;
    }
    return answer;
}
bool Armstrong(int n,int digit)
{
    int num=n, rem,ans=0;
    while (num)
    {
        rem=num%10;
        num/=10;
        ans=ans+pow(rem,digit);
    }
    if(ans==n)
    return 1;
    else
    return 0;

}
int main()
{
    int num;
    cin>>num;
    int digit=countDigit(num);
cout<<Armstrong(num,digit)<<endl;
//cout<<countDigit(num);
    
};
