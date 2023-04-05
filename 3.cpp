#include<bits/stdc++.h>
using namespace std;
const int N=1000;
vector<int>adj[N];
int visited[N];
bool bfs(int src);
int main()
{
    for(int i=0; i<N; i++)visited[i]=-1;
    int n,m;
    cin>>n>>m;
    for(int i=0; i<m; i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    if( bfs(1))
    {
        cout<<"Cycle Exist";
        return 0;
    }
    cout<<"No Cycle";
    return 0;
}
bool bfs(int src)
{
    queue<int>q;
    q.push(src);
    while(!q.empty())
    {
        int head=q.front();
        visited[head]=0;
        q.pop();
        for(auto j:adj[head])
        {
            if(visited[j]==-1)
            {
                visited[j]=0;
                q.push(j);
            }
            else if(visited[j]==0)
            {
                return true;
            }
        }
        visited[head]=1;
    }
    return false;
}
