#include<bits/stdc++.h>
using namespace std;
 

void print() //print the graph
{
    for(int i=0;i<v;i++)
    {
        for(int j=0;j<v;j++)
        {
            cout<<graph[i][j]<<" ";
        }
        cout<<endl;
    }
}

void dfs(vector<vector<int>>&g,int s,vector<bool>&vis,int v) //DFS algorithm
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
    return;
}

void bfs(vector<vector<int>>&g,int s,vector<bool>&vis,int v) //bfs algorithm
{
    queue<int>q;
    q.push(s);
    vis[s]=true;
    while(!q.empty())
    {
        int s = q.front();
        q.pop();
        cout<<s<<"\n";
        for(int i=0;i<v;i++)
        {
            if(g[s][i]==1 && vis[i]==false)
            {
                q.push(i);
                vis[i]=true;
            }
        }
    }
    return;
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

    vector<bool>visited(v,false);

    for(int i=0;i<v;i++)
    {
        if(visited[i]==false)
        {
            dfs(graph,i,visited,v);
        }
    }
return 0;
    
}


