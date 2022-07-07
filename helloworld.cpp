#include<bits/stdc++.h>
using namespace std;
template <class T>
T func(vector<T>&v,T def = 0)
{
    T sum=0;
    for(int i=0;i<v.size();i++)
    {
        sum+=v[i];
    }
    return sum;
}
int main()
{
   vector<int>v;
    v.push_back(5);v.push_back(6);v.push_back(7);v.push_back(8);v.push_back(9);
   vector<double>v1;
   v1.push_back(5.5);v1.push_back(6.6);v1.push_back(7.7);v1.push_back(8.8);v1.push_back(9.9);
   vector<string>v2;
   v2.push_back("hey");v2.push_back("It's");v2.push_back("Magix.|");
   cout<<func<int>(v)<<endl;
   cout<<func<double>(v1)<<endl;
   cout<<func<string>(v2,"")<<endl;
   return 0;
}
