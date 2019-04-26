#include <iostream>
#include <stdlib.h>
using namespace std;
int main() {
    string walk;
    int miss;
    int x = 0, y = 0;
    cin >> walk;
    cin >> miss;
    int n = 0, s = 0, w = 0, e = 0;
    for (int i = 0; i < walk.length(); i++)
    {
        if (walk[i] == 'N') {
            n++;
            y++;
        }
        else if (walk[i] == 'S') {
            s++;
            y--;
        }
        else if (walk[i] == 'W') {
            w++;
            x--;
        } else {
            e++;
            x++;
        }
    }
    int cut;
    if (x >= 0 && y > 0) {
        cut = s+w;
    }
    else if (x < 0 && y >= 0) {
        cut = s+e;
    }
    else if (x <= 0 && y < 0) {
        cut = n+e;
    }
    else if (x > 0 && y <= 0) {
        cut = n+w;
    }
    int ans = abs(x) + abs(y) + cut;
    if(cut < miss) ans -= miss-cut;
    else if(cut > miss) ans -= cut-miss;
    cout << ans * 2;
}