<<<<<<< HEAD
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
=======
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
>>>>>>> c46aa179a8a23e5373040e0f81a74ba2ccfabaaf
}