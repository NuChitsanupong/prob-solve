#include <iostream>

using namespace std;
int w, h;
char inp[125][125];
int l[125][125], r[125][125], ml[125][125], mr[125][125];
int visitedL[125][125], visitedR[125][125];
int run(int i, int j, int direct){
    int x;
    cout << i <<' '<<j<< ' '<<inp[i][j] << endl;
    if(j == 0){
        x = run(i, 1, 1); //right
    }
    else if(j > w){
        x = run(i, w, -1);
    }
    else if(visitedR[i][j] && direct == 1)
        x = r[i][j];
    else if(visitedL[i][j] && direct == -1)
        x = l[i][j];
    else if(inp[i][j] == '#'){
        x = run(i, j+direct, direct);
    }
    else if(inp[i][j] == '$') x=1;
    else if(inp[i][j] == '@') x=0;
    else{ // '.'
        x = run(i+1, j, direct);
    }
    if(direct==1)
        visitedR[i][j]=1;
    else
        visitedL[i][j]=1;
    
    if(direct == 1) r[i][j] += x;
    else l[i][j] += x;
    if(!x){
        if(direct == 1) mr[i][j] --;
        else ml[i][j] --;
    }
    return x;
}

int GoGoGo(){
    int max=0;
    for(int j=1; j<=w; j++){
        max += run(1, j, -1); //left
        max += run(1, j, 1); //right
    }
    return max;
}

void Adventure(){
    int max, count;
    char temp;
    max = GoGoGo();
    // cout << max << ' ';
    // for(int i=1; i<h; i++){ //Drill
    //     for(int k=1; k<=w; k++){
    //         if(inp[i][k] == '.') continue;
    //         temp = inp[i][k];
    //         inp[i][k] = '.';
    //         count = GoGoGo(); // Run
    //         if(count > max) max = count;
    //         inp[i][k] = temp;
    //     }
    // }
    cout << max << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin >> w >> h;
    for(int i=1; i<=h; i++){
        for(int j=1; j<=w; j++){
            cin >> inp[i][j];
        }
    }
    Adventure();
    for(int i=1; i<=h; i++){
        for(int j=1; j<=w; j++){
            cout << l[i][j] << ' ';
        }
        cout << endl;
    }
    cout << endl;
    for(int i=1; i<=h; i++){
        for(int j=1; j<=w; j++){
            cout << r[i][j] << ' ';
        }
        cout << endl;
    }
    // cout << endl;
    // for(int i=1; i<=h; i++){
    //     for(int j=1; j<=w; j++){
    //         cout << ml[i][j] << ' ';
    //     }
    //     cout << endl;
    // }
    // cout << endl;
    // for(int i=1; i<=h; i++){
    //     for(int j=1; j<=w; j++){
    //         cout << mr[i][j] << ' ';
    //     }
    //     cout << endl;
    // }
}