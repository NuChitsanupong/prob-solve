#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int sum = 0, x;
    for(int i=0; i<n; i++) {
        cin >> x;
        if(x > 0) sum += x;
    }
    cout << sum;
}