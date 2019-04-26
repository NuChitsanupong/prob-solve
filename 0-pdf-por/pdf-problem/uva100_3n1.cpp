#include <iostream>
#include <list>
using namespace std;
int Cycle(int x){
    int count = 1;
    while(x!=1) {
        if(x%2 == 0)
            x/=2;
        else
            x = 3*x+1;
        count++;
    }
    return count;
}

int main() {
    list<int> x, y, ans;
    int a, b;
    int max=-1, count=-1, i = 0;
    while(cin >> a >> b) {
        x.push_back(a);
        y.push_back(b);
        if(b < a) {
            int temp = b;
            b = a;
            a = temp;
        }
        for(int j=a; j<=b; j++){
            count = Cycle(j);
            if(count > max) max = count;
        }
        ans.push_back(max);
        max = -1;
        i++;
    }
    list<int>::iterator itx, ity, itans;
    itx = x.begin();
    ity = y.begin();
    itans = ans.begin();
    while(itx!= x.end()){
        cout << *itx << ' ' << *ity << ' ' << *itans << '\n';
        itx++;
        ity++;
        itans++;
    }
    return 0;
}