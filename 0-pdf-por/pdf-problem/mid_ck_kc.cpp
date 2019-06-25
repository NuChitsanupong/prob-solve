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
}