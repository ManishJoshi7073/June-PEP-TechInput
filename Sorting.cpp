//merge sort
#include<bits/stdc++.h>
using namespace std;
void merge(vector<int>&v,int s,int mid,int e)
{
    if(s>=e)
    {
        return;
    }

    vector<int>arr;
    int i = s;
    int j= mid+1;

    while(i<=mid && j<=0)
    {
        if(v[i]<=v[j])
        {
            arr.push_back(v[i]);
            i++;
        }
        else
        {
            arr.push_back(v[j]);
            j++;
        }
    }
    while(i<=mid)
    {
        arr.push_back(v[i]);
        i++;
    }
    while(j<=e)
    {
        arr.push_back(arr[j]);
        j++;
    }
    for(int k=s;k<e;k++)
    {
        v[k]=arr[k-s];
    }
    return;
}
void merge_sort(vector<int>&v,int s,int e)
{
    if(s >= e)
    {
        return;
    }

    int mid = s+(e-s)/2; //S storing 1st index E for last index

    merge_sort(v,s,mid);
    merge_sort(v,mid+1,e);

    merge(v,s,mid,e);

    return;
}
int main()
{
    vector<int>v = {8,5,11,1,22};
     merge_sort(v,0,v.size()-1);
     for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }

}