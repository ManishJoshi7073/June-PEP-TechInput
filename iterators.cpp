#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<string> planets={"mercury","venus","earth","mars","jupiter","saturn","Uranus","Neptune"};

    vector<string>::iterator manish = planets.begin();
    vector<string>::iterator anchal = planets.begin();

    //cout<<*manish;
    //cout<<*anchal;
    //cout<<*(manish+3)<<endl;
    //advance(anchal,2);
    //cout<<*manish;
    //advance(anchal,-1);
    //cout<<*manish;
    //cout<<distance(manish,anchal)<<endl;
    
    anchal=next(anchal,5);
    cout<<*anchal;
    return 0;
}