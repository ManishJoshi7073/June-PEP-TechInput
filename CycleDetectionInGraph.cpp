//Cycle detection in a graph
// Language: cpp
#include<bits/stdc++.h>
using namespace std;

bool detect_cycle(vector<vector<int>>&g,int v)
{
    vector<bool>vis(v,false);
    for(int i=0;i<v;i++)
    {
        if(vis[i]==false)
        {
            if(dfs(g,i,vis,v))
            {
                return true;
            }
        }
    }
    return false;
}
void dfs(vector<vector<int>>&g,int s,int v,int parent,vector<bool>&vis)
{
    vis[s]=true; //mark the vertex as visited 
    for(int i=0;i<v;i++)
    {
        if(g[s][i])
        {
            if(vis[i]==false && parent !=i)
            {
                return true;
            }
            else if(!vis[i])
            {
                if(dfs(g,i,vis,v,s))
                {
                    return true;
                }
                return;
            }
        }
    }
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

    if(detect_cycle(graph,v))
    {
        cout<<"Graph is having Cycle ";
    } 
    else
    {
        cout<<"Graph do not have cycle ";
    }

    return 0;
}