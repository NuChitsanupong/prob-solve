<<<<<<< HEAD
#include <iostream>

using namespace std;
struct ListNode
{
    int val;
    ListNode* next;
    ListNode(int val, ListNode* next=0)
        : val(val), next(next) {}
};

void Append_Node(ListNode* header, int d) {
    ListNode* node = new ListNode(d);
    ListNode* ptr = header;
    while(ptr -> next){
        ptr = ptr -> next;
    }
    ptr -> next = node;
}

void Insert_Front(ListNode* header, int d) {
    ListNode* node = new ListNode(d);
    node -> next = header -> next;
    header -> next = node;
}

void Delete_Node(ListNode* header, int d) {
    int i = 1;
    ListNode* node = header; 
    while(i < d){
        node = node -> next;
        i++;
    }
    ListNode* del = node -> next;
    node -> next = node -> next -> next;
    delete del;
}

void Print_Node(ListNode* header) {
    ListNode* node = header -> next;
    while(node){
        cout << node -> val << '\n';
        node = node -> next;
    }
}

int main() {
    int n, d, count = 0;
    char m;
    cin >> n;
    ListNode* header = new ListNode(0);
    for(int i=0; i<n; i++){
        cin >> m >> d;
        if(m == 'A'){
            Append_Node(header, d);
            count++;
        }
        else if(m == 'I'){
            Insert_Front(header, d);
            count++;
        } 
        else if(d <= count) {
            Delete_Node(header, d);
            count--;
        }
    }
    Print_Node(header);
=======
#include <iostream>

using namespace std;
struct ListNode
{
    int val;
    ListNode* next;
    ListNode(int val, ListNode* next=0)
        : val(val), next(next) {}
};

void Append_Node(ListNode* header, int d) {
    ListNode* node = new ListNode(d);
    ListNode* ptr = header;
    while(ptr -> next){
        ptr = ptr -> next;
    }
    ptr -> next = node;
}

void Insert_Front(ListNode* header, int d) {
    ListNode* node = new ListNode(d);
    node -> next = header -> next;
    header -> next = node;
}

void Delete_Node(ListNode* header, int d) {
    int i = 1;
    ListNode* node = header; 
    while(i < d){
        node = node -> next;
        i++;
    }
    ListNode* del = node -> next;
    node -> next = node -> next -> next;
    delete del;
}

void Print_Node(ListNode* header) {
    ListNode* node = header -> next;
    while(node){
        cout << node -> val << '\n';
        node = node -> next;
    }
}

int main() {
    int n, d, count = 0;
    char m;
    cin >> n;
    ListNode* header = new ListNode(0);
    for(int i=0; i<n; i++){
        cin >> m >> d;
        if(m == 'A'){
            Append_Node(header, d);
            count++;
        }
        else if(m == 'I'){
            Insert_Front(header, d);
            count++;
        } 
        else if(d <= count) {
            Delete_Node(header, d);
            count--;
        }
    }
    Print_Node(header);
>>>>>>> c46aa179a8a23e5373040e0f81a74ba2ccfabaaf
}