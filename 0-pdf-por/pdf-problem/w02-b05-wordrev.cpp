<<<<<<< HEAD
#include <iostream>
using namespace std;

int main() {
    string a;
    cin >> a;
    a += '*';
    int i = 0, n = 0, j = 0;
    while(a[i]) {
        n++;
        if(a[i] == '_' || a[i] == '*') {
            j = i - 1;
            while(--n) cout << a[j--];
            if(a[i] == '*') break;
            cout << '_';
            n = 0;
        }
        i++;
    }
=======
#include <iostream>
using namespace std;

int main() {
    string a;
    cin >> a;
    a += '*';
    int i = 0, n = 0, j = 0;
    while(a[i]) {
        n++;
        if(a[i] == '_' || a[i] == '*') {
            j = i - 1;
            while(--n) cout << a[j--];
            if(a[i] == '*') break;
            cout << '_';
            n = 0;
        }
        i++;
    }
>>>>>>> c46aa179a8a23e5373040e0f81a74ba2ccfabaaf
}