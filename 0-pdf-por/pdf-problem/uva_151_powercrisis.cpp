#include <iostream>
#include <vector>
using namespace std;

int CutOff(int n, int k){
    int region[108], count = 1, i, ptr, pre;
    for(i=1; i<n; i++){
        region[i] = i+1;
    }
    region[1] = 2;
    region[n] = 2;
    ptr = 2;
    pre = 1;
    while(count++ != n){
        i = 0;
        while(i++ < k-1){
            pre = ptr;
            ptr = region[ptr];
        }
        region[pre] = region[ptr];
        pre = ptr;
        ptr = region[ptr];
        
    }
    return pre;
}

int main() {
    vector<int> ans;
    vector<int>::iterator it;
    int n=1, last, k;
    while(n){
        cin >> n;
        if(n == 0) break;
        k = 1;
        while(1) {
            last = CutOff(n, k);
            if(last == 13) {
                ans.push_back(k);
                break;
            }
            k++;
        }
    }
    for(it = ans.begin(); it != ans.end(); it++){
        cout << *it << '\n';
    }
}