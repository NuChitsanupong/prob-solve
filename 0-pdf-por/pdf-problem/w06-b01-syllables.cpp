<<<<<<< HEAD
#include <iostream>

using namespace std;

int main(){
    int n, streak=0, ans;
    string inp;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> inp;
        ans=0;
        streak=0;
        for(int j=0; j<inp.length(); j++){
            if(inp[j]=='a'||inp[j]=='e'||inp[j]=='i'||inp[j]=='o'||inp[j]=='u'){
                if(!streak) ans++;
                streak = 1;
            }
            else{
                streak = 0;
            }
        }
        cout << ans << endl;
    }
=======
#include <iostream>

using namespace std;

int main(){
    int n, streak=0, ans;
    string inp;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> inp;
        ans=0;
        streak=0;
        for(int j=0; j<inp.length(); j++){
            if(inp[j]=='a'||inp[j]=='e'||inp[j]=='i'||inp[j]=='o'||inp[j]=='u'){
                if(!streak) ans++;
                streak = 1;
            }
            else{
                streak = 0;
            }
        }
        cout << ans << endl;
    }
>>>>>>> c46aa179a8a23e5373040e0f81a74ba2ccfabaaf
}