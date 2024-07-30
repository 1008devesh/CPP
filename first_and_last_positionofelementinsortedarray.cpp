#include<iostream>
using namespace std;
int main()
{
    int arr[]={2,3,3,4,4,4,4,5,6};
    int length=sizeof(arr)/sizeof(arr[0]);
    int start=0,end=length-1,first,last,target=4;
    while(start<=end)
    {
        int mid=start+(end-start)/2;
        if(arr[mid]==target)
        {
        first=mid;
        end=mid-1;
        }
        else if(arr[mid]>target)
        {
        end=mid-1;
        }
        else
        {
        start=mid+1;
        }
    }
    //cout<<first;
    start=0,end=length-1;
    while(start<=end)
    {
        int mid=start+(end-start)/2;
        if(arr[mid]==target)
        {
        last=mid;
        start=mid+1;
        }
        else if(arr[mid]>target)
        {
        end=mid-1;
        }
        else
        {
        start=mid+1;
        }
    }
    cout<<first<<" "<<last;
}