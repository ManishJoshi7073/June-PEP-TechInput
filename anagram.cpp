#include<bits/stdc++.h>
using namespace std;

bool isAnagram(string str1,string str2)
{
    int n1,n2,f;
    n1=str1.length();
    n2=str2.length();

    if(n1!=n2)
    {
        return false;
    }

    sort(str1.begin(),str1.end());
    sort(str2.begin(),str2.end());

    for(int i=0;i<n1;i++)
    {
        if(str1==str2)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

}

int main()
{
    string str1,str2;
    str1="you are engineer";
    str2="are you engineer";

    if(isAnagram(str1,str2))
    {
        cout<<"Yes anagram";
    }
    else
    {
        cout<<"Not anagram";
    }


    return 0;
}
