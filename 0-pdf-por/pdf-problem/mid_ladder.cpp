<<<<<<< HEAD
#include <iostream>

using namespace std;

int ladder[10000];
int main(){
    int n, m, pos=0, x, win=0;
    cin >> n >> m;
    for(int i=1; i<=n; i++){
        cin >> ladder[i];
    }
    for(int i=0; i<m; i++){
        cin >> x;
        pos = pos + x;
        if(pos>=n)
            win=1;
        pos += ladder[pos];
        if(pos>=n)
            win=1;
        else if(pos < 0) pos=0;
    }
    if(win) cout << n;
    else cout << pos;
=======
#include <iostream>

using namespace std;

int ladder[10000];
int main(){
    int n, m, pos=0, x, win=0;
    cin >> n >> m;
    for(int i=1; i<=n; i++){
        cin >> ladder[i];
    }
    for(int i=0; i<m; i++){
        cin >> x;
        pos = pos + x;
        if(pos>=n)
            win=1;
        pos += ladder[pos];
        if(pos>=n)
            win=1;
        else if(pos < 0) pos=0;
    }
    if(win) cout << n;
    else cout << pos;
>>>>>>> c46aa179a8a23e5373040e0f81a74ba2ccfabaaf
}