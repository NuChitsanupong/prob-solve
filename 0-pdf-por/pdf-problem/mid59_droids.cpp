<<<<<<< HEAD
#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <stdlib.h>

using namespace std;

int main(){
    int n, m, x, first, last ,mid, delVal=-1, delPos=-1, ans=0, ft=1, temp;
    int tempVal=-1, tempPos;
    scanf("%d %d", &n, &m);
    vector<int> a;
    a.push_back(-1000000005);
    for(int i=1; i<=n; i++){
        scanf("%d", &x);
        a.push_back(x);
    }
    sort(a.begin(), a.end());
    a.push_back(-1000000005);
    for(int i=0; i<m; i++){
        cout << "a: ";
        for(int j=0; j<a.size(); j++){
            cout << a[j] << ' ';
        }
        cout << endl;
        scanf("%d", &x);
        
        first = 1;
        last = a.size()-2;
        while(first<last){
            mid = (first+last)/2;
            if(x < a[mid])
                last = mid;
            else if(x > a[mid])
                first = mid+1;
            else break;
        }
        mid = (first+last)/2;
        // cout << ' ' << mid;
        // a.erase(a.begin()+mid);
        if(abs(a[mid-1]-x)<=abs(a[mid]-x)) mid--; //Get nearest Position
        if(a[mid]==a[mid-1]){
            mid--;
        }
        // if(a[mid])
        temp = a[mid];
        // cout << "mid: " << mid << " delVal: " <<delVal <<"delPos: " << delPos << endl;
        ans += abs(a[mid]-x);
        cout << "ans+= " << abs(a[mid]-x) << endl;
        int tempPos = delPos;
        int tempVal = delVal;
        // if(!ft){
        //     a[delPos] = delVal;
        //     // a.insert(a.begin()+delPos, delVal);
        // }
        // if(delVal<temp && !ft){
        //     mid++;
        // }
        
        delVal = a[mid];
        delPos = mid;
        if(!ft){
            a[tempPos] = tempVal;
            // a.insert(a.begin()+delPos, delVal);
        }
        if(tempPos == mid && delVal == a[mid+1]) mid++;
        if(mid>=2){ //mid
            a[mid] = a[mid-1];
        }
        else if(mid<=a.size()-3){
            a[mid] = a[mid+1];
        }
        
        
        ft=0;
        ////////////////////////////////////
        // cout << "mid: " << mid << endl;
        
    }
    printf("%d", ans);
=======
#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <stdlib.h>

using namespace std;

int main(){
    int n, m, x, first, last ,mid, delVal=-1, delPos=-1, ans=0, ft=1, temp;
    int tempVal=-1, tempPos;
    scanf("%d %d", &n, &m);
    vector<int> a;
    a.push_back(-1000000005);
    for(int i=1; i<=n; i++){
        scanf("%d", &x);
        a.push_back(x);
    }
    sort(a.begin(), a.end());
    a.push_back(-1000000005);
    for(int i=0; i<m; i++){
        cout << "a: ";
        for(int j=0; j<a.size(); j++){
            cout << a[j] << ' ';
        }
        cout << endl;
        scanf("%d", &x);
        
        first = 1;
        last = a.size()-2;
        while(first<last){
            mid = (first+last)/2;
            if(x < a[mid])
                last = mid;
            else if(x > a[mid])
                first = mid+1;
            else break;
        }
        mid = (first+last)/2;
        // cout << ' ' << mid;
        // a.erase(a.begin()+mid);
        if(abs(a[mid-1]-x)<=abs(a[mid]-x)) mid--; //Get nearest Position
        if(a[mid]==a[mid-1]){
            mid--;
        }
        // if(a[mid])
        temp = a[mid];
        // cout << "mid: " << mid << " delVal: " <<delVal <<"delPos: " << delPos << endl;
        ans += abs(a[mid]-x);
        cout << "ans+= " << abs(a[mid]-x) << endl;
        int tempPos = delPos;
        int tempVal = delVal;
        // if(!ft){
        //     a[delPos] = delVal;
        //     // a.insert(a.begin()+delPos, delVal);
        // }
        // if(delVal<temp && !ft){
        //     mid++;
        // }
        
        delVal = a[mid];
        delPos = mid;
        if(!ft){
            a[tempPos] = tempVal;
            // a.insert(a.begin()+delPos, delVal);
        }
        if(tempPos == mid && delVal == a[mid+1]) mid++;
        if(mid>=2){ //mid
            a[mid] = a[mid-1];
        }
        else if(mid<=a.size()-3){
            a[mid] = a[mid+1];
        }
        
        
        ft=0;
        ////////////////////////////////////
        // cout << "mid: " << mid << endl;
        
    }
    printf("%d", ans);
>>>>>>> c46aa179a8a23e5373040e0f81a74ba2ccfabaaf
}