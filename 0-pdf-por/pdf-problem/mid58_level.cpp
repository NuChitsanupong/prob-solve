<<<<<<< HEAD
#include<iostream>

using namespace std;
int a[105], b[105], c[105];
int main(){
    int n, m, x, y, z, curlevel;
    bool passA, passB, passC;
    cin >> n >> m;
    for(int i=1; i<n; i++){
        cin >> a[i] >> b[i] >> c[i];
    }
    passA=false; passB=false; passC=false;
    curlevel = 1;
    for(int i=0; i<m; i++){
        cin >> x >> y >> z;
        if(x >= a[curlevel])
            passA = true;
        if(y >= b[curlevel])
            passB = true;
        if(z >= c[curlevel])
            passC = true;
        if(passA && passB && passC){
            passA=0; passB=0; passC=0;
            if(curlevel!=n)
                curlevel++;
        }
    }
    cout << curlevel;
=======
#include<iostream>

using namespace std;
int a[105], b[105], c[105];
int main(){
    int n, m, x, y, z, curlevel;
    bool passA, passB, passC;
    cin >> n >> m;
    for(int i=1; i<n; i++){
        cin >> a[i] >> b[i] >> c[i];
    }
    passA=false; passB=false; passC=false;
    curlevel = 1;
    for(int i=0; i<m; i++){
        cin >> x >> y >> z;
        if(x >= a[curlevel])
            passA = true;
        if(y >= b[curlevel])
            passB = true;
        if(z >= c[curlevel])
            passC = true;
        if(passA && passB && passC){
            passA=0; passB=0; passC=0;
            if(curlevel!=n)
                curlevel++;
        }
    }
    cout << curlevel;
>>>>>>> c46aa179a8a23e5373040e0f81a74ba2ccfabaaf
}