#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,f;
    cin>>n;
    f=0;
    for(int i=2;i<=n/2;i++)
    {
        if (n%i==0)
        {
            f=1;
            break;
        }
    }
    if(f==0)
    {
        cout<<n<<" Is Prime"<<endl;
        n++;
        for(int i=2;i<n;i++)
        {
            if(n%i==0)
            {
                n++;
                i=2;
            }
            else
            {
                continue;
            }
        }
        cout<<"Next prime is : "<<n;

    }
    else
    {
        cout<<n<<" is Not prime"<<endl;
        n++;
        for(int i=2;i<n;i++)
        {
            if(n%i==0)
            {
                n++;
                i=2;
            }
            else
            {
                continue;
            }
        }
        cout<<"Next prime is : "<<n;
    }
}
