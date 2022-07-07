#include<bits/stdc++.h>
using namespace std;
bool comparator(int a,int b)
{
    if(a>b) return true;
    else return false;
}
int minPlatform(vector<int>& arrival,vector<int> & departure)
{
    sort(arrival.begin(), arrival.end(),comparator);
    sort(departure.begin(),departure.end());

    int minPlatform = 0;, resultSoFar = 0,i = 0, j = 0;
    while(i<arrival.size() && j<departure.size())
    {
        if(arrival[i]<departure[j])
        {
            i++;
        } 
        else
        {
            j++;
            minPlatform--;
        }
        resultSoFar = max(ResultSOfar,minPLatform);
    }
    return resultSofar;
}
int main()
{
    vector<int> v ={900,915,940,9,7,2,6};
    vector<int> v1 ={940,1000,95045,69,87,96,33};
    minPlatform(v,v1);
    return 0;
}






