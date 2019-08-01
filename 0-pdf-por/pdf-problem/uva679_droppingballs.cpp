<<<<<<< HEAD
#include <iostream>

using namespace std;

int Dropping(int D, int I, int x, int curD){
    if(I==1 && curD == D) return x;
    else if(I%2 == 0) return Dropping(D, I/2, x*2+1, curD+1);
    else return Dropping(D, (I+1)/2, x*2, curD+1);
}

int main(){
    int l, D, I;
    cin >> l;
    while(1){
        cin >> D;
        if(D == -1) break;
        else cin >> I;
        cout << Dropping(D, I, 1, 1) << endl;
    }
=======
#include <iostream>

using namespace std;

int Dropping(int D, int I, int x, int curD){
    if(I==1 && curD == D) return x;
    else if(I%2 == 0) return Dropping(D, I/2, x*2+1, curD+1);
    else return Dropping(D, (I+1)/2, x*2, curD+1);
}

int main(){
    int l, D, I;
    cin >> l;
    while(1){
        cin >> D;
        if(D == -1) break;
        else cin >> I;
        cout << Dropping(D, I, 1, 1) << endl;
    }
>>>>>>> c46aa179a8a23e5373040e0f81a74ba2ccfabaaf
}