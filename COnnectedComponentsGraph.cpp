#include<nits/stdc++.h>
using namespace std;

void dfs(vector<vector<int>>&g,int s,vector<bool>&vis,int v)
{
    vis[s]=true;
    cout<<s<<"\n";

    for(int i=0;i<v;i++)
    {
        if(g[s][i]==1 && vis[i]==false)
        {
            dfs(g,i,vis,v);
        }
    }
}

int connected_components(vector<vector<int>>&g,int v)
{
    vector<bool>vis(v,false);
    int count=0;
    for(int i=0;i<v;i++)
    {
        if(vis[i]==false)
        {
            dfs(g,i,vis,v);
            count++;
        }
    }
    return count;
}



int main()
{
    int v,e;
    cout<<"Enter the number of vertices: ";
    cin>>v;
    cout<<"Enter the number of edges: ";
    cin>>e;

    vector<vector<int>>graph(v,vector<int>(v,0));
    for(int i=0;i<e;i++)
    {
        int s,d; //s means source and d means destination
        cout<<"Enter the edge s,d: ";
        cin>>s,d;
        graph[s][d]=1;
        graph[d][s]=1;
    } 

    return 0;
}