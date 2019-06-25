#include <stdio.h>
#include <vector>
#include <queue>

using namespace std;
int set[100005];
int visited[100005];
int main(){
    int n, m, k, a, b, setcount=0;
    vector<int> v[100005];
    vector<int> setV[60000];
    scanf("%d %d %d", &n, &m, &k);
    for(int i=0; i<m; i++){
        scanf("%d %d", &a, &b);
        v[a].push_back(b);
        v[b].push_back(a);
    }
    for(int i=1; i<=n; i++){
        if(visited[i]) continue;
        queue<int> q;
        q.push(i);
        set[i] = setcount;
        setV[setcount].push_back(a);
        while(!q.empty()){
            int cur = q.front();
            if(!visited[cur]){
                for(int i=0; i<v[cur].size(); i++){
                    q.push(v[cur][i]);
                }
            }
            set[cur] = setcount;
            visited[cur]=1;
            setV[setcount].push_back(cur);
            q.pop();
        }
        setcount++;
    }
    for(int i=0; i<k; i++){
        scanf("%d %d", &a, &b);
        if(set[a]==set[b]) printf("1\n");
        else printf("0\n");
    }
}