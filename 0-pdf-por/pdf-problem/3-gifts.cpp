<<<<<<< HEAD
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
=======
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
>>>>>>> c46aa179a8a23e5373040e0f81a74ba2ccfabaaf
}