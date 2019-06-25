#include <iostream>

using namespace std;

int main(){
    int n, lastWater=0, x, ans=0, elec;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> x;
        elec=0;
        if(lastWater-x>10) elec = (lastWater-x)*10;
        if(elec>700) elec=700;
        lastWater = x;
        ans+=elec;
    }
    cout << ans;
}