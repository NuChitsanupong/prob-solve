#include <iostream>
using namespace std;
int countP[5];

int main() {
    int P[5], n, x;
    cin >> P[1] >> P[2] >> P[3] >> n;
    for(int i=0; i<n; i++) {
        cin >> x;
        countP[x]++;
    }
    int mincost = 99999, cost[5];
    for(int i=1; i<=3; i++){
        cost[i] = P[i] * countP[i];
        if(cost[i] < mincost) mincost = cost[i];
    }
    cout << mincost;
}