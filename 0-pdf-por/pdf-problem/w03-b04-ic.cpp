#include <iostream>
#include <list>

using namespace std;

int main() {
    list<int> ls;
    list<int>::iterator it;
    int m, num;
    string inp;
    cin >> m;
    for(int i=0; i<m; i++){
        cin >> inp;
        if(inp[1] == 'i'){
            cin >> num;
            if(inp[0] == 'l')
                ls.push_front(num);
            else
                ls.push_back(num);
        }
        else if(inp[0] == 'l' && inp[1] == 'r'){
            ls.push_back(ls.front());
            ls.pop_front();
        }
        else {
            ls.push_front(ls.back());
            ls.pop_back();
        }
    }
    for (it=ls.begin(); it != ls.end(); ++it)
        std::cout << *it << '\n';
}