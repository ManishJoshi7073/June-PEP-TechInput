#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<string>v;
    unordered_map<string,int>m;
    int n;
    string a;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }

    for(int i=0;i<v.size();i++)
    {
        if (m.find(v[i]) == m.end()) {
            m[v[i]] = 1;
        }
        else {
            m[v[i]]++;
        }
    }
     for (auto it : m) {
            if(it.second==1)
            {
                cout<<"\n"<<it.first;
            }
    }

}
