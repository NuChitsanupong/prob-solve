#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    vector<int> a;
    int m, op, x, first, last, mid;
    cin >> m;
    for(int i=0; i<m; i++){
        cin >> op >> x;
        first = 0; last = a.size();
        mid = (first+last)/2;
        while(first<last){
            mid = (first+last)/2;
            if(x < a[mid]) last = mid;
            else if (x > a[mid]) first = mid+1;
            else break;
        }
        if(op == 1){
            a.insert(a.begin()+(first+last)/2, x);
        }
        else if(op == 2){
            if(a.size()){
                if(a[(first+last)/2] == x) cout << 1 << endl;
                else cout << 0 << endl;
            }
            else{
                cout << 0 << endl;
            }
        }
        else {
            if(a.size())
                if(a[mid] == x)
                    a.erase(a.begin()+mid);
        }
    }
}
