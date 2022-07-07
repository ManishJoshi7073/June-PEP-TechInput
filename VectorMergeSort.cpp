#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,k=0,i,temp;
    cout<<"Size of vector 1: ";
    cin>>m;
    cout<<"Size of vector 2: ";
    cin>>n;
    vector<int>a1(m);
    vector<int>a2(n);
    vector<int>a3(m+n);
    cout<<"\nelement V1 \n";
    for(i=0;i<m;i++)
    {
        cin>>a1[i];

    }
    for(i=0;i<m;i++)
    {
        cout<<a1[i]<<" ";
        a3[i]=a1[i];
    }
    k=i;
    cout<<"\nelement V2 \n";
    for(i=0;i<n;i++)
    {
        cin>>a2[i];
    }
    for(i=0;i<n;i++)
    {
        cout<<a2[i]<<" ";
        a3[k]=a2[i];
        k++;
    }
    cout<<"\n---------------------------------------------------\n";
    for(i=0;i<a3.size();i++)
    {
        cout<<a3[i]<<" ";
    }
    cout<<"\n----------------------Sorted merge array-----------------------------\n";
    for(i=0;i<a3.size();i++)
    {
        for(int j=i;j<a3.size();j++)
        {
            if(a3[i]>a3[j])
            {
                temp=a3[i];
                a3[i]=a3[j];
                a3[j]=temp;
            }
        }
    }
     for(i=0;i<a3.size();i++)
    {
        cout<<a3[i]<<" ";
    }

}
