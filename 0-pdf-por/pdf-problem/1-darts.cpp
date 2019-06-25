#include <iostream>
#include <math.h>
using namespace std;

float findDistance(float x, float y) {
    return sqrt(x*x + y*y);
}

int main() {
    int n, score = 0;
    float x, y, distance;
    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> x >> y;
        distance = findDistance(x, y);
        if(distance <= 2) score += 5;
        else if(distance <= 4) score += 4;
        else if(distance <= 6) score += 3;
        else if(distance <= 8) score += 2;
        else if(distance <= 10) score += 1;
    }
    cout << score;
}