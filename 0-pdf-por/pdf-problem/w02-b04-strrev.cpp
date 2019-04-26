#include <iostream>
using namespace std;

int main() {
    string a;
    cin >> a;
    int i = 0;
    while(a[i]) i++;
    while(i--) cout << a[i];
}