#include <iostream>
using namespace std;

int main() {
    int t;
    string a;
    cin >> t;
    char b[200];
    int j;
    while(t--) {
        cin >> a;
        b[0] = '0';
        j = 1;
        for(int i = 0; i < a.length(); i++){
            if(b[j-1] == '(' && a[i] == ')') {
                b[--j] = '0';
            }
            else if(b[j-1] == '{' && a[i] == '}') {
                b[--j] = '0';
            }
            else if(b[j-1] == '[' && a[i] == ']') {
                b[--j] = '0';
            }
            else {
                b[j++] = a[i];
            }
        }
        if(j == 1) cout << "yes" << endl;
        else cout << "no" << endl;
    }
}
