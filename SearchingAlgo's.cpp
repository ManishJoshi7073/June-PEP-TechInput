//Binary search
#include<bits/stdc++.h>
using namespace std;
bool chk_val(vector<int>&v,int x)
{
    int lo=0;
    int hi=v.size()-1;
    while(lo<=hi)
    {
        int mid=lo+(hi-lo)/2;
        if(v[mid]==x)return 1;
        if(v[mid]>x){
            hi-mid-1;
        }
        else lo=mid+1;
    }   
    return 0;
}
int main()
{
    vector<int>v {1,2,3,4,10,15,28,58};

    if(chk_val(v,11))
    {
        cout<<"It is present";
    }
    else
    {
        cout<<"Not present";
    }
}

/*Linear search-------
#include<bits/stdc++.h>
using namespace std;
bool chk_val(vector<int>&v,int x)
{
    for(int i=0;i<v.size();i++)
    {
        if(v[i]==x) return 1;
    }
    return 0;
}
int main()
{
    vector<int>v={1,2,3,4,10,15,28,58};

    if(chk_val(v,11))
    {
        cout<<"It is present";
    }
    else
    {
        cout<<"Not present";
    }
}*/