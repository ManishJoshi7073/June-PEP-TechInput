#include<bits/stdc++.h>
using namespace std;

// void print()
// {
//     for(int i=0;i<v;i++)
//     {
//         for(int j=0;j<v;j++)
//         {
//             cout<<graph[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }

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
    return;
}

// void bfs(int i)   
// {
//     queue<int> q;
//     q.push(i);
//     visited[i]=1;
//     while(!q.empty())
//     {
//         int x=q.front();
//         q.pop();
//         for(int j=0;j<v;j++)
//         {
//             if(graph[x][j]==1 && visited[j]==0)
//             {
//                 q.push(j);
//                 visited[j]=1;
//             }
//         }
//     }
// }

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


