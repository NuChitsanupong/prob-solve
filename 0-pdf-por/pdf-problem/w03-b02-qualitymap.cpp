#include <iostream>

using namespace std;
int n, m, haveForest, haveOres, count;
char a[35][35];
int run(int i, int j){
    int ans = 0, x;
    if(i == n || j == m || i<0 || j<0) return 0;
    if(a[i][j] == '#') return 0;
    if(a[i][j] == '*') haveForest = 1;
    else if(a[i][j] == '$') haveOres = 1;
    a[i][j] = '#';
    count++;
    run(i-1, j);
    run(i+1, j);
    run(i, j-1);
    run(i, j+1);
    return 0;
}

int main(){
    int ans1 = 0, ans2 = 0;
    cin >> n >> m;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> a[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            haveForest = 0;
            haveOres = 0;
            count = 0;
            if(a[i][j]!='#') run(i, j);
            if(haveForest && haveOres) ans1+=count;
            else if(haveForest || haveOres) ans2+=count;
        }
    }
    cout << ans1 << ' ' << ans2;
}