#include<iostream>
using namespace std;
int main()
{
    /// buy and sell stock for one share only//
//     int prices[]={7,1,5,3,6,4};
// int buy=prices[0];
//         int profit=0;
//         int sell;
//         for(int i=0;i<6;i++)
//         {
             
//             buy=min(prices[i],buy);
//             sell=prices[i]-buy;
//             profit=max(profit,sell);            
            
//         }
        
//         cout<<profit;

// buy and sell stock for multiple share but at a time youn can buy only one share
int arr[]={7,1,5,3,6,4};
int profit=0;
for(int i=1;i<6;i++)
    {   
        if(arr[i]>arr[i-1])
        profit+=arr[i]-arr[i-1];
}

cout<<profit;
}