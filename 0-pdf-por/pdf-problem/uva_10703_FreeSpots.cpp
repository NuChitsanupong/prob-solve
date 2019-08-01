<<<<<<< HEAD
#include <iostream>

using namespace std;
int a[502][502];
int Blackspot(int h1, int w1, int h2, int w2){
    int count = 0;
    for(int i=h1; i<=h2; i++){
        for(int j=w1; j<=w2; j++){
            if(a[i][j]){
                count++;
                a[i][j]--;;
            }
        }
    }
    return count;
}
int main(){
    int w, h, n, h1, h2, w1, w2, blackcount, ans;    
    while(1){
        cin >> w >> h >> n;
        if(!w) break;
        blackcount = 0;
        for(int i=1; i<=h; i++){
            for(int j=1; j<=w; j++){
                a[i][j] = 1;
            }
        }
        for(int k=0; k<n; k++){
            cin >> w1 >> h1 >> w2 >> h2;
            if(h1==h2 && w1 > w2){
                blackcount += Blackspot(h1, w2, h2, w1);
            }
            else if(h1<h2 && w1>w2)
                blackcount += Blackspot(h1, w2, h2, w1);
            else if(h1>h2){
                if(w1==w2)
                    blackcount += Blackspot(h2, w2, h1, w1);
                else if(w1>w2)
                    blackcount += Blackspot(h2, w2, h1, w1);
                else // w1 < w2
                    blackcount += Blackspot(h2, w1, h1, w2);
            }
            else
                blackcount += Blackspot(h1, w1, h2, w2);
        }
        ans = w*h - blackcount;
        if(!ans) cout << "There is no empty spots.\n";
        else if(ans == 1) cout << "There is one empty spot.\n";
        else cout << "There are " << ans << " empty spots.\n";
    }
}
=======
#include <iostream>

using namespace std;
int a[502][502];
int Blackspot(int h1, int w1, int h2, int w2){
    int count = 0;
    for(int i=h1; i<=h2; i++){
        for(int j=w1; j<=w2; j++){
            if(a[i][j]){
                count++;
                a[i][j]--;;
            }
        }
    }
    return count;
}
int main(){
    int w, h, n, h1, h2, w1, w2, blackcount, ans;    
    while(1){
        cin >> w >> h >> n;
        if(!w) break;
        blackcount = 0;
        for(int i=1; i<=h; i++){
            for(int j=1; j<=w; j++){
                a[i][j] = 1;
            }
        }
        for(int k=0; k<n; k++){
            cin >> w1 >> h1 >> w2 >> h2;
            if(h1==h2 && w1 > w2){
                blackcount += Blackspot(h1, w2, h2, w1);
            }
            else if(h1<h2 && w1>w2)
                blackcount += Blackspot(h1, w2, h2, w1);
            else if(h1>h2){
                if(w1==w2)
                    blackcount += Blackspot(h2, w2, h1, w1);
                else if(w1>w2)
                    blackcount += Blackspot(h2, w2, h1, w1);
                else // w1 < w2
                    blackcount += Blackspot(h2, w1, h1, w2);
            }
            else
                blackcount += Blackspot(h1, w1, h2, w2);
        }
        ans = w*h - blackcount;
        if(!ans) cout << "There is no empty spots.\n";
        else if(ans == 1) cout << "There is one empty spot.\n";
        else cout << "There are " << ans << " empty spots.\n";
    }
}
>>>>>>> c46aa179a8a23e5373040e0f81a74ba2ccfabaaf
