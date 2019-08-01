<<<<<<< HEAD
#include <iostream>
#include <stdlib.h>
using namespace std;
int ans[100];
int main() {
    int n, j, first, sec, mul;
    
    cin >> n;
    string inp;
    for(int i=0; i<n; i++){
        cin >> inp;
        j = 0;
        first = 0;
        sec = 0;
        mul = 676;
        while(inp[j]!='-'){
            first += (inp[j]-'A') * mul;
            mul/=26;
            j++;
        }
        j++;
        mul = 1000;
        while(j!=inp.length()){
            sec += (inp[j]-'0') * mul;
            mul/=10;
            j++;
        }
        
        if(abs(first-sec)<=100) ans[i]++;
    }
    for(int i=0; i<n; i++){
        if(ans[i]) cout << "nice\n";
        else cout << "not nice\n";
    }
=======
#include <iostream>
#include <stdlib.h>
using namespace std;
int ans[100];
int main() {
    int n, j, first, sec, mul;
    
    cin >> n;
    string inp;
    for(int i=0; i<n; i++){
        cin >> inp;
        j = 0;
        first = 0;
        sec = 0;
        mul = 676;
        while(inp[j]!='-'){
            first += (inp[j]-'A') * mul;
            mul/=26;
            j++;
        }
        j++;
        mul = 1000;
        while(j!=inp.length()){
            sec += (inp[j]-'0') * mul;
            mul/=10;
            j++;
        }
        
        if(abs(first-sec)<=100) ans[i]++;
    }
    for(int i=0; i<n; i++){
        if(ans[i]) cout << "nice\n";
        else cout << "not nice\n";
    }
>>>>>>> c46aa179a8a23e5373040e0f81a74ba2ccfabaaf
}