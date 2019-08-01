<<<<<<< HEAD
#include <iostream>

using namespace std;

int Nod[1000005];
int Ni[1000005];
int CountN[1000005];
int num=1000000;
void SieveCal(){
    int j;
    Nod[1] = 1;
    for(int i=2; i<=num; i++){
        j=i;
        Nod[i]++;
        if(Nod[j])
            while(j<=num){
                Nod[j]++;
                j+=i;
            }
    }
}

void FindNod(){
    Ni[0] = 1;
    for(int i=1; i<=num; i++){
        Ni[i]=Ni[i-1] + Nod[Ni[i-1]];
    }
}

void CountNod(int a, int b){
    int cur=0;
    for(int i=0; i<=b; i++){
        CountN[i] = CountN[i-1];
        if(Ni[cur]<=i){
            CountN[i]++;
            cur++;
        }
    }
    cout << CountN[b] - CountN[a-1] << endl;
}

int BFSNi(int x){
    int l=0, mid = num/2, r=num;
    int pl, pr, pm=1;
    while(pl!=l || pr!=r){
        pl=l, pr=r, pm=mid;
        if(Ni[mid]<x){
            l = mid;
        }
        else if(Ni[mid]>x){
            r = mid;
        }
        else{
            pm = mid;
            break;
        }
        mid = (r+l)/2;
    }
    if(x>=1) pm++;
    return pm;
}

int main(){
    int n, a, b;
    cin >> n;
    SieveCal();
    FindNod();
    for(int i=1; i<=n; i++){
        cin >> a >> b;
        cout << "Case " << i << ": ";
        cout << BFSNi(b) - BFSNi(a-1)<< endl;
    }
=======
#include <iostream>

using namespace std;

int Nod[1000005];
int Ni[1000005];
int CountN[1000005];
int num=1000000;
void SieveCal(){
    int j;
    Nod[1] = 1;
    for(int i=2; i<=num; i++){
        j=i;
        Nod[i]++;
        if(Nod[j])
            while(j<=num){
                Nod[j]++;
                j+=i;
            }
    }
}

void FindNod(){
    Ni[0] = 1;
    for(int i=1; i<=num; i++){
        Ni[i]=Ni[i-1] + Nod[Ni[i-1]];
    }
}

void CountNod(int a, int b){
    int cur=0;
    for(int i=0; i<=b; i++){
        CountN[i] = CountN[i-1];
        if(Ni[cur]<=i){
            CountN[i]++;
            cur++;
        }
    }
    cout << CountN[b] - CountN[a-1] << endl;
}

int BFSNi(int x){
    int l=0, mid = num/2, r=num;
    int pl, pr, pm=1;
    while(pl!=l || pr!=r){
        pl=l, pr=r, pm=mid;
        if(Ni[mid]<x){
            l = mid;
        }
        else if(Ni[mid]>x){
            r = mid;
        }
        else{
            pm = mid;
            break;
        }
        mid = (r+l)/2;
    }
    if(x>=1) pm++;
    return pm;
}

int main(){
    int n, a, b;
    cin >> n;
    SieveCal();
    FindNod();
    for(int i=1; i<=n; i++){
        cin >> a >> b;
        cout << "Case " << i << ": ";
        cout << BFSNi(b) - BFSNi(a-1)<< endl;
    }
>>>>>>> c46aa179a8a23e5373040e0f81a74ba2ccfabaaf
}