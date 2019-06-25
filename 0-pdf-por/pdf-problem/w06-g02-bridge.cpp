#include<iostream>

using namespace std;
int bankAat[3005], bankBat[3005], bankAtPos_A[3005], bankAtPos_B[3005];
int bank[3005], maxBridge[3005];
int main(){
    int n, x, ans=1;
    cin >> n;
    for(int i=1; i<=n; i++){
        cin >> x;
        // bankAat[x] = i;
        bankAtPos_A[i] = x;
    }
    for(int i=1; i<=n; i++){
        cin >> x;
        bankBat[x] = i;
        // bankAtPos_B[i] = x;
    }
    for(int i=1; i<=n; i++){
        bank[i] = bankBat[bankAtPos_A[i]];
    }
    // for(int i=1; i<=n; i++){
    //     cout << bank[i] << ' ';
    // }
    // cout << endl;
    maxBridge[1] = 1;
    for(int i=2; i<=n; i++){
        maxBridge[i] = 1;
        for(int j=1; j<i; j++){
            if(bank[j] < bank[i] && maxBridge[j]+1 > maxBridge[i])
                maxBridge[i] = maxBridge[j] + 1;
        }
        if(maxBridge[i]>ans)
            ans = maxBridge[i];
    }
    // for(int i=1; i<=n; i++)
    //     cout << maxBridge[i] << ' ';
    cout << ans;
}