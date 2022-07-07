#include<bits/stdc++.h>
using namespace std;

int missing_num(vector<int>&v,int n)
{
    int s=(n*(n+1)/2);

    for(int i=0;i<v.size();i++)
    {
        s-=v[i];
    }
    return s;
}

int main()
{
    
    return 0;

}