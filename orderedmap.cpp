#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<char,int>mp;
    //unordered_map<char,int>ump;

    mp['M']=1;
    mp['J']=2;
    string str="manish";
    //mp.erase('M');for erasing an specific element.
    for(int i=0;i<str.size();i++)
    {
        mp[str[i]]++;
    }
    return 0;
}