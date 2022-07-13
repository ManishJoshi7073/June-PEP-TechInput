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
void dfs(int i)
{
    visited[i]=1;
    for(int j=0;j<v;j++)
    {
        if(graph[i][j]==1 && visited[j]==0)
        {
            dfs(j);
        }
    }
}

void bfs(int i)
{
    queue<int> q;
    q.push(i);
    visited[i]=1;
    while(!q.empty())
    {
        int x=q.front();
        q.pop();
        for(int j=0;j<v;j++)
        {
            if(graph[x][j]==1 && visited[j]==0)
            {
                q.push(j);
                visited[j]=1;
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
        int s,d;
        cout<<"Enter the edge s,d: ";
        cin>>s,d;
        graph[s][d]=1;
        graph[d][s]=1;
    } 
    
}

