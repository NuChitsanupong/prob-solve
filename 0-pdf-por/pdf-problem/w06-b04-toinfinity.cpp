#include <iostream>
#include <algorithm>

using namespace std;

int stage[105];

int main(){
    int n, x, y, r, posR=9999999, negR=9999999, cal=0, possible=1;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> x >> y >> r;
        if(y>0){
            cal = y-r;
            if(cal<posR) posR=cal;
        }
        else if(y<0){
            cal = -y-r;
            if(cal<negR) negR=cal;
        }
        else{
            possible=0;
        }
    }
    cal = min(posR, negR);
    if(cal<=0 || !possible)
        cout << -1 << endl;
    else
        cout << cal << endl;
}