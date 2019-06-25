#include <iostream>

using namespace std;

struct Tree{
    Tree* left;
    Tree* right;
    int val;
    Tree(int val, Tree* left = 0, Tree* right = 0)
    :val(val), left(left), right(right){}
};

int DFS(Tree* node, int depth=0){
    if(!node) return 0;
    DFS(node -> right, depth+1);
    for(int i=0; i<depth; i++){
        cout << "...";
    }
    cout << "* " << node -> val << endl;
    DFS(node -> left, depth+1);
}

void bst(Tree* header,int val){
    Tree* cur = header;
    Tree* temp = header;
    Tree* newNode = new Tree(val);
    char dt = 'l';
    while(cur){
        temp = cur;
        if(val < cur -> val){
            cur = cur -> left;
            dt = 'l';
        }
        else{
            cur = cur -> right;
            dt = 'r';
        }
    }
        if(dt == 'l')
            temp -> left = newNode;
        else
            temp -> right = newNode;
}

int main(){
    int n, op, val;
    cin >> n;
    cin >> val;
    Tree* header = new Tree(val);
    for(int i=1; i<n; i++){
        cin >> val;
        bst(header, val);
    }
    DFS(header);
}