#include <stdio.h>
#include <vector>
#include <queue>

using namespace std;

vector<int> bst(vector<int> v[], int vi){
    queue<int> q;
    vector<int> newV;
    q.push(vi);
    int visited[100005] = {0};
    while(!q.empty()){
        int cur = q.front();
        if(!visited[cur]){
            for(int i=0; i<v[cur].size(); i++){
                q.push(v[cur][i]);
            }
        }
        visited[cur]=1;
        newV.push_back(cur);
        q.pop();
    }
    return newV;
}

int main(){
    int n, m, k, a, b, found;
    vector<int> v[100005];
    vector<int> temp;
    for(int i=0; i<100004; i++){
        
    }
    // cin >> n >> m >> k;
    scanf("%d %d %d", &n, &m, &k);
    for(int i=0; i<m; i++){
        // cin >> a >> b;
        scanf("%d %d", &a, &b);
        v[a].push_back(b);
        v[b].push_back(a);
    }
    for(int i=1; i<=n; i++){
        temp = bst(v, i);
    }
    for(int i=1; i<=k; i++){
        scanf("%d %d", &a, &b);
        // cin >> a >> b;
        found = 0;
        for(int j=0; j<v[a].size(); j++){
            if(v[a][j] == b){
                found = 1;
                break;
            }
        }
        if(found)
            printf("1\n");
        else
            printf("0\n");
    }
}