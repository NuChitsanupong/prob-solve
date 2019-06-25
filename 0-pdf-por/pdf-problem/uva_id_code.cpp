#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    string inp;
    char temp;
    int i, success;
    while(1){
        cin >> inp;
        success = 0;
        if(inp == "#") break;
        for(i=inp.length()-1; i>0 && !success; i--){
            for(int j = i-1; j>=0 && !success; j--){
                if(inp[i]>inp[j]){
                    temp = inp[i];
                    inp[i] = inp[j];
                    inp[j] = temp;
                    sort(inp.begin()+j+1, inp.end());
                    success++;
                }
            }
        }
        if(success) cout << inp << endl;
        else cout << "No Successor" << endl;
    }
    
}