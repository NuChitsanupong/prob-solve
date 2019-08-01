<<<<<<< HEAD
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
        else{
            if(a[(first+last)/2] == x) cout << 1 << endl;
            else cout << 0 << endl;
        }
    }
}
=======
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
        else{
            if(a[(first+last)/2] == x) cout << 1 << endl;
            else cout << 0 << endl;
        }
    }
}
>>>>>>> c46aa179a8a23e5373040e0f81a74ba2ccfabaaf
