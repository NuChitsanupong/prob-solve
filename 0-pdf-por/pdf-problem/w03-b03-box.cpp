<<<<<<< HEAD
#include <iostream>
#include <vector>

using namespace std;
int n, m, a[50][50], visited[50][50];
int run(int i, int j){
    int x=0;
    if(i == n-1 || j == m-1 || i<0 || j<0) return 0;
    if(visited[i][j]) return 0;
    visited[i][j]=1;
    if(a[i][j] == 0) return 0;
    if(i+2 == n) return 1; //a[i][j]=1
    return run(i-1, j)||run(i+1, j)||run(i, j-1)||run(i, j+1);
}

int main() {
    int num = 0 ;
    cin >> n >> m;
    vector<string> board;
    string inp;
    for(int i=0; i<n; i++){
        cin >> inp;
        board.push_back(inp);
    }
    for(int i=0; i<n-1; i++){
        for(int j=0; j<m-1; j++){
            if(board[i][j]=='.'&&board[i+1][j]=='.'&&board[i][j+1]=='.'&&board[i+1][j+1]=='.')
                a[i][j] = 1;
            else
                a[i][j] = 0;
        }
    }
    int x=0;
    for(int j=0; j<m-1; j++){
        if(a[0][j]) x+=run(0, j);
        a[0][j] = 0;
    }
    if(x!=0) cout<<"yes";
    else cout <<"no";
=======
#include <iostream>
#include <vector>

using namespace std;
int n, m, a[50][50], visited[50][50];
int run(int i, int j){
    int x=0;
    if(i == n-1 || j == m-1 || i<0 || j<0) return 0;
    if(visited[i][j]) return 0;
    visited[i][j]=1;
    if(a[i][j] == 0) return 0;
    if(i+2 == n) return 1; //a[i][j]=1
    return run(i-1, j)||run(i+1, j)||run(i, j-1)||run(i, j+1);
}

int main() {
    int num = 0 ;
    cin >> n >> m;
    vector<string> board;
    string inp;
    for(int i=0; i<n; i++){
        cin >> inp;
        board.push_back(inp);
    }
    for(int i=0; i<n-1; i++){
        for(int j=0; j<m-1; j++){
            if(board[i][j]=='.'&&board[i+1][j]=='.'&&board[i][j+1]=='.'&&board[i+1][j+1]=='.')
                a[i][j] = 1;
            else
                a[i][j] = 0;
        }
    }
    int x=0;
    for(int j=0; j<m-1; j++){
        if(a[0][j]) x+=run(0, j);
        a[0][j] = 0;
    }
    if(x!=0) cout<<"yes";
    else cout <<"no";
>>>>>>> c46aa179a8a23e5373040e0f81a74ba2ccfabaaf
}