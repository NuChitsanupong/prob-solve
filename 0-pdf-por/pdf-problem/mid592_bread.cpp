#include <stdio.h>
#include <vector>
#include <stdlib.h>
#include <utility>
#include <algorithm>

using namespace std;
typedef pair < int, pair <int, int> > pairs;
int bst(vector<pairs> a, int value){
    if(!a.size() || value < a[0].first) {
        return 0;
    }
    if(value > a[a.size()-1].first) {
        return a.size()-1;
    }
    int lo = 0;
    int hi = a.size() - 1;
    while (lo <= hi) {
        int mid = (hi + lo) / 2;
        if (value < a[mid].first) {
            hi = mid - 1;
        } else if (value > a[mid].first) {
            lo = mid + 1;
        } else {
            return mid;
        }
    }
    return (a[lo].first - value) < (value - a[hi].first) ? lo : hi;
}

int main(){
    int n, q, x, c, l, pos, ans, j, minPos;
    scanf("%d %d", &n, &q);
    vector<int> store, breadPrice, breadRemain;
    vector<pairs> a;
    for(int i=0; i<n; i++){
        scanf("%d %d %d", &x, &c, &l);
        int first = 0;
        int last = a.size()-1;
        int mid = (first + last) / 2;
        while (first <= last)
        {
            mid = (first + last) / 2;
            if (x < a[mid].first)
                last = mid-1;
            else if (x > a[mid].first)
                first = mid + 1;
            else
                break;
        }
        pos = (first + last)/2;
        a.insert(a.begin()+pos, make_pair(x, make_pair(c, l)));
        // a.push_back(make_pair(x, make_pair(c, l)));
        for(int i=0; i<a.size(); i++){
            printf("%d ", a[i].first);
        }
        printf("\n");
    }
    for(int i=0; i<a.size(); i++){
        printf("%d ", a[i].first);
    }
    for(int i=0; i<q; i++){
        scanf("%d", &x);
        ans = 0;
        pos = bst(a, x);
        printf("pos: %d\n", a[pos].first);
        j=pos-5;
        minPos=pos;
        while(j<=pos+5){
            if(j>=0 && j<a.size()){
                if(a[minPos].second.first>a[j].second.first && abs(a[j].first-x)<=5) minPos=j;
            }
            j++;
        }
        pos=minPos;
        if(pos>=0 && pos<a.size())
        {
            if(abs(a[pos].first-x)<=5){
                ans = a[pos].second.first;
                a[pos].second.second--;
                if(a[pos].second.second<=0){
                    a.erase(a.begin()+pos);
                }
            }
        }
        printf("%d\n", ans);
    }
}