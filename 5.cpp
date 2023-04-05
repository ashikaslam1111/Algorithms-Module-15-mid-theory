#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
vector<int>adj[N];
bool visited[N];
void bfs(int src);
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0; i<m; i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    bfs(1);
    if(visited[n])
    {
        cout<<"YES";
        return 0;
    }
    cout<<"NO";
    return 0;
}
void bfs(int src)
{
    visited[src]=true;
    queue<int>q;
    q.push(src);
    while(!q.empty())
    {
        int head=q.front();
        q.pop();
        for(auto j:adj[head])
        {
            if(visited[j]==false)
            {
                visited[j]=true;
                q.push(j);
            }
        }
    }
}
