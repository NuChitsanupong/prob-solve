#include <iostream>
#include <vector>
#include <queue>

using namespace std;
int use[100005];
void BFS(vector<int> *adj, int i){
    int cur;
    queue<int> q;
    q.push(i);
    use[i]=1;
    while(!q.empty()){
        cur = q.front();
        while(!adj[cur].empty()){
            if(!use[adj[cur].back()]){
                q.push(adj[cur].back());
            }
            adj[cur].pop_back();
        }
        use[q.front()] = 1;
        q.pop();
    }
}

int main(){
    vector<int> adj[100005];
    int n, m, a, b, ans = 0;
    cin >> n >> m;
    for(int i=0; i<m; i++){
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    for(int i=1; i<=n; i++){
        if(!use[i]) {
            BFS(adj, i);
            ans++;
        }
    }
    cout << ans;
}