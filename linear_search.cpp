#include<iostream>
using namespace std;
int main()
{
    int arr[]={10,45,3,5,7,8,9};
    int size=sizeof(arr)/sizeof(arr[0]);
    int data,s=0;
    cout<<"Enter data to search:";
    cin>>data;
    for(int i=0;i<size;i++)
    {
        if(arr[i]==data)
        {
            s=i;
            break;
        } 
    }
    if(s==0)
    cout<<"Element not found.";
    else
    cout<<"Element found at position:"<<s+1<<" and index:"<<s;
    return 0;
}