#include <iostream>
using namespace std;

struct ListNode
{
    int val;
    ListNode* next;
    ListNode* prev;
    ListNode(int val, ListNode* next=0, ListNode* prev=0)
        : val(val), next(next), prev(prev) {}
};

void Append_Node(ListNode* header, int d) {
    ListNode* node = new ListNode(d);
    ListNode* ptr = header;
    while(ptr -> next){
        ptr = ptr -> next;
    }
    ptr -> next = node;
    node -> prev = ptr;
}

void Move_Node(ListNode* nodeA, ListNode* nodeB){
    ListNode* node = nodeB;
    while(node->next){
        node = node -> next;
    }
    node -> next = nodeA -> next;
    nodeA -> next = 0;
}

void Print_Node(ListNode* header) {
    ListNode* node = header -> next;
    while(node){
        cout << node -> val << '\n';
        node = node -> next;
    }
}

int main() {
    int n, a, b;
    char m;
    cin >> n;
    ListNode* header = (ListNode*) malloc(n*sizeof(ListNode));
    // ListNode* header[n];
    for(int i=0; i<n; i++){
        header[i] = 0;
    }
    for(int i=0; i<n; i++) {
        cin >> m >> a >> b;
        if(m == 'N')
            Append_Node(&header[b], a);
        else
            Move_Node(&header[a], &header[b]);
    }
    for(int j=0; j<n; j++) {
        Print_Node(&header[j]);
    }
}