#include <iostream>

using namespace std;
int a[100][100], n, k, Initial=1;
int walk(int i, int j, int cur){
    int ans=0, next;
    // cout << i << ' ' << j << ' ' << cur << endl;
    if(i==n && j==n) return 1;
    else if(i<=0 || j<=0 || i>n || j>n) return 0;
    if(cur+k>=a[i][j]||Initial){
        Initial=0;
        next = a[i][j];
        a[i][j]=99999999; //visited
        return walk(i+1, j, next)||walk(i-1, j, next)||walk(i, j+1, next)||walk(i, j-1, next);;
    }
    return 0;
}

int main(){
    cin >> n >> k;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cin >> a[i][j];
        }
    }
    if(walk(1, 1, 0)) cout << "yes";
    else cout << "no";
}