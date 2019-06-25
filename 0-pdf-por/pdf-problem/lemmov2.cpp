#include <iostream>

using namespace std;
int w, h;
char inp[125][125];
int l[125][125], r[125][125];
// int ml[125][125], mr[125][125];
// int visitedL[125][125], visitedR[125][125];
int visited[125][125], revrun[125][125], visitedrev[125][125];
int run(int i, int j, int direct){
    int x;
    if(j == 0){
        x = run(i, 1, 1); //right
    }
    else if(j > w){
        x = run(i, w, -1);
    }
    else if(r[i][j] && direct == 1) x=1;
    else if(l[i][j] && direct == -1) x=1;
    else if(inp[i][j] == '#'){
        x = run(i, j+direct, direct);
    }
    else if(inp[i][j] == '$') x=1;
    else if(inp[i][j] == '@') x=0;
    else{
        x = run(i+1, j, direct);
    }
    if(direct == 1) r[i][j] += x;
    else l[i][j] += x;
    // if(!x){
    //     if(direct == 1) mr[i][j] --;
    //     else ml[i][j] --;
    // }
    visited[i][j]++;
    // if(direct==1)
    //     visitedR[i][j]++;
    // else
    //     visitedL[i][j]++;
    return x;
}

int rerun(int i, int j, int direct){
    int x=0;
    revrun[i][j]++;
    if(i==1) return 1;
    if(visitedrev[i][j]) return 1;
    else{
        visitedrev[i][j]=1;
        if(j == 0){
        rerun(i, 1, 1); //right
        }
        else if(j > w){
            rerun(i, w, -1);
        }
        else if(inp[i][j]=='#' || inp[i][j]=='$'){
            rerun(i, j+direct, direct);
        }
        else if(inp[i][j]=='.'&&(inp[i+1][j]=='#'||inp[i+1][j]=='$'))
        if(inp[i][j] == '@') 
            revrun[i][j]=0;
        
        else if(inp[i-1][j] == '.')
            rerun(i-1, j, direct);
    }
}

int GoGoGo(){
    int max=0;
    for(int j=1; j<=w; j++){
        if(inp[h][j] == '$'){
            rerun(h, j, -1); //left
            visitedrev[h][j]=0;
            rerun(h, j, 1); //right
        }
    }
    for(int j=1; j<=w; j++){
        max += run(1, j, -1); //left
        max += run(1, j, 1); //right
    }
    return max;
}

void Adventure(){
    int max, count, drill=0;
    char temp;
    
    max = GoGoGo();
    cout << max << ' ';
    for(int i=1; i<h; i++){ //Drill
        for(int j=1; j<=w; j++){
            // if(!visited[i+1][j]){
            //     run(1, j, -1);
            //     run(1, j, 1);
            // }
            if(inp[i][j] == '#' && (l[i+1][j] || r[i+1][j] || revrun[i+1][j])){
                if(visited[i][j]>drill)
                    drill = visited[i][j];
            }
        }
    }
    cout << max+drill << endl;
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
    // for(int i=1; i<=h; i++){
    //     for(int j=1; j<=w; j++){
    //         cout << l[i][j] << ' ';
    //     }
    //     cout << endl;
    // }
    // cout << endl;
    // for(int i=1; i<=h; i++){
    //     for(int j=1; j<=w; j++){
    //         cout << r[i][j] << ' ';
    //     }
    //     cout << endl;
    // }
    // cout << endl;
    // for(int i=1; i<=h; i++){
    //     for(int j=1; j<=w; j++){
    //         cout << visited[i][j] << ' ';
    //     }
    //     cout << endl;
    // }
    // cout << endl;
    // for(int i=1; i<=h; i++){
    //     for(int j=1; j<=w; j++){
    //         cout << revrun[i][j] << ' ';
    //     }
    //     cout << endl;
    // }
}