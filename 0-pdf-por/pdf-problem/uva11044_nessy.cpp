<<<<<<< HEAD
#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

int main() {
    vector<int> ans;
    vector<int>::iterator it;
    int t;
    float a, b;
    cin >> t;
    while(t--){
        cin >> a >> b;
        ans.push_back(ceil((a-2)/3) * ceil((b-2)/3));
    }
    for(it = ans.begin(); it!= ans.end(); it++){
        cout << *it << endl;
    }
=======
#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

int main() {
    vector<int> ans;
    vector<int>::iterator it;
    int t;
    float a, b;
    cin >> t;
    while(t--){
        cin >> a >> b;
        ans.push_back(ceil((a-2)/3) * ceil((b-2)/3));
    }
    for(it = ans.begin(); it!= ans.end(); it++){
        cout << *it << endl;
    }
>>>>>>> c46aa179a8a23e5373040e0f81a74ba2ccfabaaf
}