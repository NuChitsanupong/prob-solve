<<<<<<< HEAD
#include <iostream>

using namespace std;

int ToBinary(int a, int *x){
    int i=0;
    while(a) {
        if(a%2 == 0) x[i]=0;
        else x[i]=1;
        a/=2;
        i++;
    }
    return i;
}

int BiToDec(int *bi, int n){
    int mul = 1, i=0, dec = 0;
    while(i<n){
        if(bi[i]==1)
            dec+=mul;
        mul*=2;
        i++;
    }
    return dec;
}

int AddWithoutCarry(int *x, int *y, int na, int nb){
    int i=0, sum, *z;
    z = (int*) malloc(100*sizeof(int));
    while(i<na && i<nb) {
        sum = x[i] + y[i];
        if(sum == 2)
            z[i] = 0;
        else
            z[i] = sum;
        i++;
    }
    while(i<na){
        z[i] = x[i];
        i++;
    }
    while(i<nb){
        z[i] = y[i];
        i++;
    }
    return BiToDec(z, i);
}

int main() {
    int *x, *y, *ans, na, nb;
    x = (int*) malloc(100*sizeof(int));
    y = (int*) malloc(100*sizeof(int));
    ans = (int*) malloc(100000*sizeof(int));
    int count=-1, i = 0, a, b;
    while(cin >> a >> b) {
        na = ToBinary(a, x);
        nb = ToBinary(b, y);
        ans[i] = AddWithoutCarry(x, y, na, nb);
        i++;
    }
    i=0;
    while(ans[i]){
        cout << ans[i] << '\n';
        i++;
    }
    free(x);
    free(y);
    free(ans);
=======
#include <iostream>

using namespace std;

int ToBinary(int a, int *x){
    int i=0;
    while(a) {
        if(a%2 == 0) x[i]=0;
        else x[i]=1;
        a/=2;
        i++;
    }
    return i;
}

int BiToDec(int *bi, int n){
    int mul = 1, i=0, dec = 0;
    while(i<n){
        if(bi[i]==1)
            dec+=mul;
        mul*=2;
        i++;
    }
    return dec;
}

int AddWithoutCarry(int *x, int *y, int na, int nb){
    int i=0, sum, *z;
    z = (int*) malloc(100*sizeof(int));
    while(i<na && i<nb) {
        sum = x[i] + y[i];
        if(sum == 2)
            z[i] = 0;
        else
            z[i] = sum;
        i++;
    }
    while(i<na){
        z[i] = x[i];
        i++;
    }
    while(i<nb){
        z[i] = y[i];
        i++;
    }
    return BiToDec(z, i);
}

int main() {
    int *x, *y, *ans, na, nb;
    x = (int*) malloc(100*sizeof(int));
    y = (int*) malloc(100*sizeof(int));
    ans = (int*) malloc(100000*sizeof(int));
    int count=-1, i = 0, a, b;
    while(cin >> a >> b) {
        na = ToBinary(a, x);
        nb = ToBinary(b, y);
        ans[i] = AddWithoutCarry(x, y, na, nb);
        i++;
    }
    i=0;
    while(ans[i]){
        cout << ans[i] << '\n';
        i++;
    }
    free(x);
    free(y);
    free(ans);
>>>>>>> c46aa179a8a23e5373040e0f81a74ba2ccfabaaf
}