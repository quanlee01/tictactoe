#include <bits/stdc++.h>
using namespace std;
int n, m;
vector<int> adj[1001];
bool visited[1001];
stack<int> st;
queue<int> qe;
void dfs()
{
    visited[1] = true;
    st.push(1); 
    while(!st.empty())
    {
        int v = st.top();
        st.pop();
        cout<<v<<' ';
        for(int i: adj[v]) 
        {
            if(!visited[i])
            {
                visited[i] = true;
                st.push(i);
            }
        }
    }
    memset(visited, false, sizeof(visited));

}
void bfs()
{
    visited[1] = true;
    qe.push(1);
    while(!qe.empty())
    {
        int v = qe.front();
        qe.pop();
        cout<<v<<' ';
        for(int i: adj[v]) 
        {
            if(!visited[i]) 
            {
                visited[i] = true;
                qe.push(i);
            }
        }
    }
    memset(visited, false, sizeof(visited));    
}
int main()
{
    freopen("graph.inp" , "r", stdin);
    freopen("test.out" , "w", stdout);
    cin>>n>>m;
    for(int i = 0; i < m; ++i)
    {
        int x,y; cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    memset(visited, false, sizeof(visited));
    bfs();
    cout<<endl;
    dfs();
    return 0;
}