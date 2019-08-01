<<<<<<< HEAD
#include <iostream>
#include <vector>
using namespace std;
vector<int> inp;

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
        else{
            sorted.push_back(inp[p2]);
            p2++;
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
    while(1){
        cin >> n;
        if(!n) break;
        for(int i=0; i<n; i++){
            cin >> inp[i];
        }
        Mergesort(0, n-1);
        int i = 0;
        for(i=0; i<n-1; i++){
            cout << inp[i] << ' ';
        }
        cout << inp[i] << endl;
    }
=======
#include <iostream>
#include <vector>
using namespace std;
vector<int> inp;

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
        else{
            sorted.push_back(inp[p2]);
            p2++;
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
    while(1){
        cin >> n;
        if(!n) break;
        for(int i=0; i<n; i++){
            cin >> inp[i];
        }
        Mergesort(0, n-1);
        int i = 0;
        for(i=0; i<n-1; i++){
            cout << inp[i] << ' ';
        }
        cout << inp[i] << endl;
    }
>>>>>>> c46aa179a8a23e5373040e0f81a74ba2ccfabaaf
}