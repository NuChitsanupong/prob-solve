<<<<<<< HEAD
#include <iostream>

using namespace std;

int stage[105];

int main(){
    int n, m, stageI, len, allLen=0;
    cin >> n >> m;
    for(int i=0; i<m; i++){
        cin >> stageI >> len;
        if(len<stage[stageI] || !stage[stageI]) {
            allLen = allLen - stage[stageI] + len;
            stage[stageI] = len;
        }
    }
    cout << allLen << endl;
    for(int i=1; i<=n; i++){
        cout << i << ' ' << stage[i] << endl;
    }
=======
#include <iostream>

using namespace std;

int stage[105];

int main(){
    int n, m, stageI, len, allLen=0;
    cin >> n >> m;
    for(int i=0; i<m; i++){
        cin >> stageI >> len;
        if(len<stage[stageI] || !stage[stageI]) {
            allLen = allLen - stage[stageI] + len;
            stage[stageI] = len;
        }
    }
    cout << allLen << endl;
    for(int i=1; i<=n; i++){
        cout << i << ' ' << stage[i] << endl;
    }
>>>>>>> c46aa179a8a23e5373040e0f81a74ba2ccfabaaf
}