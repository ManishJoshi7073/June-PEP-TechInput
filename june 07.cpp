#include<iostream>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int arr[n];

   for(int i=0;i<n;i++)
   {
    cin>>arr[i];
   }

   int targetSum;
   cin>>targetSum;

   int i,j;
   i=0;
   j=n-1;
   int flag=0;

   //arr[i] //arr[j]
   while(i>j)
   {
    if(arr[i]+arr[j]==targetSum)
    {
        flag=1;
        break;
    }
    if(arr[i]+arr[j]>targetSum)
    {
        j--;
    }
    else
    {
        i++;
    }
   }
}