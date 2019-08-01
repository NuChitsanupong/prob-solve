<<<<<<< HEAD
#include <stdio.h>
#include <list>
#include <vector>

using namespace std;

int main(){
    vector< list<int> > node;
    list<int> newnode;
    int a, b, n;
    char m;
    scanf("%d", &n);
    for(int i=0; i<100005; i++){
        node.push_back(newnode);
    }
    for(int i=0; i<n; i++) {
        scanf(" %c %d %d", &m, &a, &b);
        if(m == 'N')
            node[b].push_back(a);
        else
            node[b].splice(node[b].end(), node[a]);
    }
    for(vector< list<int>>::iterator it = node.begin(); it != node.end(); it++){
        for(list<int>::iterator jt = it->begin(); jt!= it->end(); jt++){
            printf("%d\n", *jt);
        }
    }
=======
#include <stdio.h>
#include <list>
#include <vector>

using namespace std;

int main(){
    vector< list<int> > node;
    list<int> newnode;
    int a, b, n;
    char m;
    scanf("%d", &n);
    for(int i=0; i<100005; i++){
        node.push_back(newnode);
    }
    for(int i=0; i<n; i++) {
        scanf(" %c %d %d", &m, &a, &b);
        if(m == 'N')
            node[b].push_back(a);
        else
            node[b].splice(node[b].end(), node[a]);
    }
    for(vector< list<int>>::iterator it = node.begin(); it != node.end(); it++){
        for(list<int>::iterator jt = it->begin(); jt!= it->end(); jt++){
            printf("%d\n", *jt);
        }
    }
>>>>>>> c46aa179a8a23e5373040e0f81a74ba2ccfabaaf
}