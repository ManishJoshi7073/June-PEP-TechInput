#include<bits\stdc++.h>
using namespace std;
int main()
{
    unordered_map<int,int>mp;
    vector<int>v = {0,1,2,850,5,5280,5,2,0,5,0,1};

    for(int i=0;i<v.size();i++)
    {
        mp[v[i]]++;
    }
    if(mp.count(0)==1)
    {
       cout<<"Present.!";
       cout<<mp[0]<<endl; 
    }
return 0;
}