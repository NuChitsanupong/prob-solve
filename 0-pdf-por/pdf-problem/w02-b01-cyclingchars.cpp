<<<<<<< HEAD
#include <iostream>
using namespace std;

int main() {
    string a;
    cin >> a;
    for(int i = 0; i < a.length(); i++) {
        a[i]+=4;
        if(a[i]>'z') a[i] = 'a' + a[i] - 'z' - 1;
    }
    cout << a;
=======
#include <iostream>
using namespace std;

int main() {
    string a;
    cin >> a;
    for(int i = 0; i < a.length(); i++) {
        a[i]+=4;
        if(a[i]>'z') a[i] = 'a' + a[i] - 'z' - 1;
    }
    cout << a;
>>>>>>> c46aa179a8a23e5373040e0f81a74ba2ccfabaaf
}