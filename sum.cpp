#include<iostream>
using namespace std;
#include<stdio.h>
int main()
{
   int arr[]={10,45,3,5,7,8,9};
   int sum=0;
   int size=sizeof(arr)/sizeof(arr[0]);
   for(int i=0;i<size;i++)
   {
    sum=sum+arr[i];
   }
   cout<<sum;
   return 0;
}