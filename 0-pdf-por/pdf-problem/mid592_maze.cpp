<<<<<<< HEAD
#include <iostream>

using namespace std;
string maps[30];
int n, k;
int visitted[30][30];
int walk(int r, int c, int a, int b,int key){
    int ans=0, next;
    if(visitted[r][c]) return 0;
    else if(r==a && c==b) return 1;
    else if(r<0 || c<0 || r>=n || c>=n) return 0;
    visitted[r][c]=1;
    if(maps[r][c]=='O'){
        if(key)
            key--;
        else
            return 0;
    }
    else if(maps[r][c]=='#')
        return 0;
    return(walk(r+1, c, a, b, key) || walk(r-1, c, a, b, key) || walk(r, c+1, a, b, key) || walk(r, c-1, a, b, key));
}

int main(){
    int r, c, a, b;
    cin >> n >> k;
    for(int i=0; i<n; i++){
        cin >> maps[i];
    }
    for(int i=1; i<=k; i++){
        cin >> r >> c >> a >> b;
        for(int j=0; j<n; j++){
            for(int z=0; z<n; z++){
                visitted[j][z]=0;
            }
        }
        if(walk(r-1, c-1, a-1, b-1, 1)) cout << "yes" << endl;
        else cout << "no" << endl;   
    }
}
=======
#include <iostream>

using namespace std;
string maps[30];
int n, k;
int visitted[30][30];
int walk(int r, int c, int a, int b,int key){
    int ans=0, next;
    if(visitted[r][c]) return 0;
    else if(r==a && c==b) return 1;
    else if(r<0 || c<0 || r>=n || c>=n) return 0;
    visitted[r][c]=1;
    if(maps[r][c]=='O'){
        if(key)
            key--;
        else
            return 0;
    }
    else if(maps[r][c]=='#')
        return 0;
    return(walk(r+1, c, a, b, key) || walk(r-1, c, a, b, key) || walk(r, c+1, a, b, key) || walk(r, c-1, a, b, key));
}

int main(){
    int r, c, a, b;
    cin >> n >> k;
    for(int i=0; i<n; i++){
        cin >> maps[i];
    }
    for(int i=1; i<=k; i++){
        cin >> r >> c >> a >> b;
        for(int j=0; j<n; j++){
            for(int z=0; z<n; z++){
                visitted[j][z]=0;
            }
        }
        if(walk(r-1, c-1, a-1, b-1, 1)) cout << "yes" << endl;
        else cout << "no" << endl;   
    }
}
>>>>>>> c46aa179a8a23e5373040e0f81a74ba2ccfabaaf
