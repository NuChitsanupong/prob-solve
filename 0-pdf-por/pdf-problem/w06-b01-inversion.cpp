#include <iostream>
#include <vector>
using namespace std;
vector<int> inp;
long long inv=0;
void Merge(int l1, int r1, int l2, int r2){
    vector<int> sorted;
    int p1 = l1;
    int p2 = l2;
    int n = 0;
    while(p1 <= r1 && p2 <= r2){
        if(inp[p1] <= inp[p2]){
            sorted.push_back(inp[p1]);
            p1++;
        }
        else{//p1>p2
            sorted.push_back(inp[p2]);
            p2++;
            inv+=r1-p1+1;
            //cout << inp[p1] << ' ' << inp[p2-1] <<' '<< inv << endl;
        }
        n++;
    }
    while(p1 <= r1){
        sorted.push_back(inp[p1]);
        p1++;
        n++;
    }
    while(p2 <= r2){
        sorted.push_back(inp[p2]);
        p2++;
        n++;
    }
    int p = 0;
    while(p < n){
        inp[l1+p] = sorted[p];
        p++;
    }
}

int Mergesort(int l, int r){
    if(l == r) return 0;
    Mergesort(l, (l+r)/2);
    Mergesort((l+r)/2+1, r);
    Merge(l, (l+r)/2, (l+r)/2+1, r);
    return 0;
}

int main() {
    ios::sync_with_stdio(false);
    int n;
    for(int i=0; i<2000005; i++){
        inp.push_back(0);
    }
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> inp[i];
    }
    Mergesort(0, n-1);
    cout << inv;
}