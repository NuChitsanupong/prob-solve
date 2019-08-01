<<<<<<< HEAD
#include <iostream>

using namespace std;
int cal[5][5] = {{0, 1, 2, 3}, {3, 0, 1, 2}, {2, 3, 0, 1}, {1, 2, 3, 0}}; //N E S W
int getCal(char x) {
    if(x == 'N') return 0;
    else if(x == 'E') return 1;
    else if(x == 'S') return 2;
    else return 3;
}
int main() {
    string walk;
    cin >> walk;
    char face = 'N';
    int x, y, printR;
    for(int i=0; i < walk.length(); i++) {
        if(walk[i] == face) cout << 'F';
        else if(walk[i] != 'Z') {
            x = getCal(face);
            y = getCal(walk[i]);
            printR = cal[x][y];
            while(printR != 0) {
                cout << 'R';
                printR--;
            }
            face = walk[i];
            cout << 'F';
        }
        else {
            cout << 'Z';
            face = 'N';
        }
    }
=======
#include <iostream>

using namespace std;
int cal[5][5] = {{0, 1, 2, 3}, {3, 0, 1, 2}, {2, 3, 0, 1}, {1, 2, 3, 0}}; //N E S W
int getCal(char x) {
    if(x == 'N') return 0;
    else if(x == 'E') return 1;
    else if(x == 'S') return 2;
    else return 3;
}
int main() {
    string walk;
    cin >> walk;
    char face = 'N';
    int x, y, printR;
    for(int i=0; i < walk.length(); i++) {
        if(walk[i] == face) cout << 'F';
        else if(walk[i] != 'Z') {
            x = getCal(face);
            y = getCal(walk[i]);
            printR = cal[x][y];
            while(printR != 0) {
                cout << 'R';
                printR--;
            }
            face = walk[i];
            cout << 'F';
        }
        else {
            cout << 'Z';
            face = 'N';
        }
    }
>>>>>>> c46aa179a8a23e5373040e0f81a74ba2ccfabaaf
}