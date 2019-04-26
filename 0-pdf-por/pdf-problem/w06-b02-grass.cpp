#include <iostream>
using namespace std;
string a[200];
int n;

void walk(int x, int y, int i, int j){
    while((x==1 && j!=n)||(x==-1 && j!=-1)||(y==1 && i!=n)||(y==-1 && i!=-1)){
        if(a[i][j]=='x'){
            a[i][j]='.';
        }
        else{
            break;
        }
        j+=x;
        i+=y;
    }
}

void plant(int row, int col){
    if(row){
        row--;
        for(int i=0; i<n; i++){
            if(a[row][i]=='.') a[row][i]='x';
        }
    }
    else{
        col--;
        for(int i=0; i<n; i++){
            if(a[i][col]=='.') a[i][col]='x';
        }
    }
}

int main(){
    int m, k;
    char op;
    cin >> n >> m;
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    for(int i=0; i<m; i++){
        cin >> op >> k;
        if(op=='L'){
            walk(1, 0, k-1, 0);
        }
        else if(op=='R'){
            walk(-1, 0, k-1, n-1);
        }
        else if(op=='U'){
            walk(0, 1, 0, k-1);
        }
        else if(op=='D'){
            walk(0, -1, n-1, k-1);
        }
        else if(op=='A'){
            plant(k, 0);
        }
        else{//B
            plant(0, k);
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << a[i][j];
        }
        cout << endl;
    }
}