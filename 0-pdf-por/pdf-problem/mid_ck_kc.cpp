<<<<<<< HEAD
#include <iostream>
using namespace std;

int main(){
    int n, x=1, miss=-1;
    cin >> n;
    while(x!=0){
        cin >> x;
        miss++;
    }
    if((n-2558-miss)%2) cout << 'C';
    else cout <<'K';
=======
#include <iostream>
using namespace std;

int main(){
    int n, x=1, miss=-1;
    cin >> n;
    while(x!=0){
        cin >> x;
        miss++;
    }
    if((n-2558-miss)%2) cout << 'C';
    else cout <<'K';
>>>>>>> c46aa179a8a23e5373040e0f81a74ba2ccfabaaf
}