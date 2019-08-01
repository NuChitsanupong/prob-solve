<<<<<<< HEAD
#include <iostream>
#include <algorithm>
using namespace std;

int maxI[5];
int a[10000];

int main() {
    int n, x, ans1, ans2, ans3, ans4;
    cin >> n;
    for(int i=1; i<=4*n; i++){
        cin >> a[i];
        if(i<=n){
            if(a[i]>a[maxI[0]]) maxI[0]=i;
        }
        else if(i<=2*n){
            if(a[i]>a[maxI[1]]) maxI[1]=i;
        }
        else if(i<=3*n){
            if(a[i]>a[maxI[2]]) maxI[2]=i;
        }
        else{
            if(a[i]>a[maxI[3]]) maxI[3]=i;
        }
    }
    if(a[maxI[0]]>a[maxI[1]]){
        ans1 = maxI[0];
        ans3 = maxI[1];
    }
    else{
        ans1 = maxI[1];
        ans3 = maxI[0];
    }
    if(a[maxI[2]]>a[maxI[3]]){
        ans2 = maxI[2];
        ans4 = maxI[3];
    }
    else{
        ans2 = maxI[3];
        ans4 = maxI[2];
    }
    if(a[ans1]<a[ans2]){
        int temp = ans1;
        ans1 = ans2;
        ans2 = temp;
    }
    cout << ans1 << ' '<< ans2 << ' '<< ans3 << ' '<< ans4;
=======
#include <iostream>
#include <algorithm>
using namespace std;

int maxI[5];
int a[10000];

int main() {
    int n, x, ans1, ans2, ans3, ans4;
    cin >> n;
    for(int i=1; i<=4*n; i++){
        cin >> a[i];
        if(i<=n){
            if(a[i]>a[maxI[0]]) maxI[0]=i;
        }
        else if(i<=2*n){
            if(a[i]>a[maxI[1]]) maxI[1]=i;
        }
        else if(i<=3*n){
            if(a[i]>a[maxI[2]]) maxI[2]=i;
        }
        else{
            if(a[i]>a[maxI[3]]) maxI[3]=i;
        }
    }
    if(a[maxI[0]]>a[maxI[1]]){
        ans1 = maxI[0];
        ans3 = maxI[1];
    }
    else{
        ans1 = maxI[1];
        ans3 = maxI[0];
    }
    if(a[maxI[2]]>a[maxI[3]]){
        ans2 = maxI[2];
        ans4 = maxI[3];
    }
    else{
        ans2 = maxI[3];
        ans4 = maxI[2];
    }
    if(a[ans1]<a[ans2]){
        int temp = ans1;
        ans1 = ans2;
        ans2 = temp;
    }
    cout << ans1 << ' '<< ans2 << ' '<< ans3 << ' '<< ans4;
>>>>>>> c46aa179a8a23e5373040e0f81a74ba2ccfabaaf
}