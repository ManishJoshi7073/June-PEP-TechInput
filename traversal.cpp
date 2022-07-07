#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>l={1,2,3,4,5,6,7,8,9,10};
    for(list<int>::iterator it=l.begin();it!=l.end();it++)
    {
        cout<<*it;
    }
    cout<<endl;
    string str="manish";
    map<char,int>mp;
    for(int i=0;i<str.size();i++)
    {
        mp[str[i]++];
    }
    
    for(map<char,int>::iterator it=mp.begin();it!=mp.end();it++)
    {
        cout<<it->first<<"-> "<<it->second<<endl;
    }
}

//////////////////////////////////////////////
/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>l;
    l.push_back(10);
    l.push_back(20);
    l.push_front(30);
    l.pop_back();
    l.pop_front();
    
    for(list<int>::iterator it=l.begin();it!=l.end();it++)
    {
        cout<<*it;
        cout<<endl;
    }
    
    /*string str="manish";
    map<char,int>mp;
    for(int i=0;i<str.size();i++)
    {
        mp[str[i]++];
    }
    
    for(map<char,int>::iterator it=mp.begin();it!=mp.end();it++)
    {
        cout<<it->first<<"-> "<<it->second<<endl;
    }*/