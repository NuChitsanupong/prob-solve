#include <iostream>

using namespace std;

int main(){
    int n, a, b, r, x, y, ans=0;
    cin >> n >> a >> b >> r;
    for(int i=0; i<n; i++){
        cin >> x >> y;
        if((a-x)*(a-x)+(b-y)*(b-y)<=r*r) ans++;
    }
    cout << ans;
}