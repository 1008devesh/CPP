// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[]={2,7,9,3,6,1};
//     int length=sizeof(arr)/sizeof(arr[0]);
// //// finding maximum in array
//     // first way   int ans=INT8_MIN;
//     int ans=arr[0];// second way
//     for(int i=1;i<length;i++)
//     {
//         while(ans<arr[i])
//         {
//             ans=arr[i];
//         }

//     }
//     cout<<"Maximum element in the array is"<<ans;

// }
#include<iostream>
using namespace std;
int main()
{
    int arr[]={2,7,9,0,1,8,-13};
    int length=sizeof(arr)/sizeof(arr[0]);
    int ans=arr[0];
    for(int  i=1;i<length;i++)
    {
        while(ans>arr[i])
        {
            ans=arr[i];
        }
    }
    cout<<"Minimum element in the array is"<<""<<ans;
};