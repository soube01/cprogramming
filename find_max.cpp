#include<iostream>
using namespace std;
int main()
{
    int arr[]={100,45,3,5,7,55,9};
    int max=arr[0];
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=1;i<size;i++)
    {
      if(arr[i]>max)
      {
        max=arr[i];
      }
    }
    cout<<"Maximum number is:"<<max;
    return 0;
}