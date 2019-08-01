<<<<<<< HEAD
#include <iostream>

using namespace std;
int necklace[300005];
int reverse[300005];
int main() {
    int n, a, b, temp, j, save, head;
    cin >> n;
    for(int i = 0; i < n-1; i++) {
        cin >> a >> b;
        if(!necklace[b]){
            necklace[b] = a;
            reverse[a] = b;
        }
        else{
            temp = necklace[b];
            reverse[a] = b;
            necklace[b] = a;
            j = a;
            save = a;
            while(j != 0){
                save = j;
                j = necklace[j];
            }
            necklace[save] = temp;
            reverse[temp] = save;
        }
    }
    while(reverse[b]!=0){
        b = reverse[b];
        head = b;
    }
    j = head;
    while(j!=0){
        cout << j << ' ';
        j = necklace[j];
    }
=======
#include <iostream>

using namespace std;
int necklace[300005];
int reverse[300005];
int main() {
    int n, a, b, temp, j, save, head;
    cin >> n;
    for(int i = 0; i < n-1; i++) {
        cin >> a >> b;
        if(!necklace[b]){
            necklace[b] = a;
            reverse[a] = b;
        }
        else{
            temp = necklace[b];
            reverse[a] = b;
            necklace[b] = a;
            j = a;
            save = a;
            while(j != 0){
                save = j;
                j = necklace[j];
            }
            necklace[save] = temp;
            reverse[temp] = save;
        }
    }
    while(reverse[b]!=0){
        b = reverse[b];
        head = b;
    }
    j = head;
    while(j!=0){
        cout << j << ' ';
        j = necklace[j];
    }
>>>>>>> c46aa179a8a23e5373040e0f81a74ba2ccfabaaf
}