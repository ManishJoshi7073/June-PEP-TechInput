#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5};
    vector<int>v;
    int l=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<l;i++)
    {
        cout<<i<<": "<<arr[i]<<endl;
    }
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int j,first;
        first=arr[0];
        for(j=0;j<l-1;j++)
        {
            arr[j]=arr[j+1];
        }
        arr[j]=first;
    }

    for(int i=0;i<l;i++)
    {
       v.push_back(arr[i]);
    }
    for(int i=0;i<v.size();i++)
    {
        cout<<i<<": "<<v[i]<<endl;
    }

    return 0;
}
