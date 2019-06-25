#include <iostream>

using namespace std;

int CountRec(string a[], int i, int j, int n, int m){
    int start = 0, count, ans = 0;
    for(int row = 0; row<=n-i; row++){
        for(int col = 0; col<=m-j; col++){
            count = 0;
            for(int countrow = 0; countrow<i; countrow++){
                for(int countcol = 0; countcol<j; countcol++){
                    if(a[row+countrow][col+countcol] == '1') count++;
                    else break;
                }
            }
            if(count == i*j) ans++;
        }
    }
    return ans;
}

int main(){
    string a[105];
    int n, m, count;
    while(1){
        cin >> n;
        if(!n) break;
        cin >> m;
        count = 0;
        for(int i=0; i<n; i++) cin >> a[i];
        for(int i=1; i<=n; i++){
            for(int j=1; j<=m; j++){
                count += CountRec(a, i, j, n, m);
            }
        }
        cout << count << endl;
    }
}