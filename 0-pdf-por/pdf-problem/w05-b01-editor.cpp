#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    char op;
    string inp;
    vector<string> a;
    a.push_back("0");
    int it=1;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> op;
        if(op == 'i'){
            cin >> inp;
            a.insert(a.begin()+it, inp);
            it++;
        }
        else if(op == 'l'){
            if(it>1) it--;
        }
        else if(op == 'r'){
            if(it!=a.size()) it++;
        }
        else if(op == 'b'){
            if(it>1){
                a.erase(a.begin()+it-1);
                if(it>1) it--;
            }
        }
        else{
            if(it!=a.size()){
                // it++;
                a.erase(a.begin()+it);
                // if(it>1) it--;
            }
        }
    }
    // for(int j=0; j<a.size(); j++){
    //         cout << a[j] << ' ';
    //     }
    //     cout << "it: " << it << endl;
    // }
    for(int j=1; j<a.size(); j++){
            cout << a[j] << ' ';
        }
        cout << endl;
}