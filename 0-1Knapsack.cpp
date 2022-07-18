//0-1 knapsack problem
#include<bits/stdc++.h>
using namepsacce std;
int max(int x,int y)
{
    if(x>y)
    {
        return x;
    }
    else
    {
        return y;
    }
}

int knapsack(int W,int w[],int val[],int n)
{
    int i,wt;
    int K[n+1][W+1];
    for(i=0;i<=n;i++)
    {
        for(wt=0;wt<=W;wt++)
        {
            if(i==0 || wt==0) //if there are no items or if the weight is 0
            {
                K[i][wt]=0;
            }
            else if(w[i-1]<=wt) //if the weight of the item is less than or equal to the weight
            {
                K[i][wt]=max(v[i-1]+K[i-1][wt-w[i-1]],K[i-1][wt]);
            }
            else //if the weight of the item is greater than the weight
            {
                K[i][wt]=K[i-1][wt];
            }
        }
    }
    return K[n][W];
}

int main()
{
    cout<<"Number of Items: ";
    int n,W;
    cin>>n;
    int v[n],w[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the value of item "<<i+1<<": ";
        cin>>v[i];
        cout<<"Enter the weight of item "<<i+1<<": ";
        cin>>w[i];
    }
    cout<<"Enter the weight capacity: ";
    cin>>W;
    cout<<knapsack(W,w,v,n);
    return 0;
}