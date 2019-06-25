#include <iostream>
using namespace std;

int main() {
    string a;
    cin >> a;
    for(int i = 0; i < a.length(); i++) {
        if(a[i] >= 'a' && a[i] <= 'z') a[i] += 'A' - 'a';
    }
    cout << a;
}