#include <stdio.h>
#include <iostream>

using namespace std;

int Is_rev = 0, tail;

struct ListNode
{
    int val;
    ListNode* next;
    ListNode* prev;
    ListNode(int val, ListNode* next=0, ListNode* prev=0)
        : val(val), next(next), prev(prev) {}
};

void Print_Node(ListNode* node){
    ListNode* cur = node ;
    while(cur){
        cout << cur -> val << '-';
        cur = cur -> next;
    }
    cout << endl;
}

int Reverse(ListNode* curr, ListNode* rev) {
    // ListNode* temp = rev;
    int temp=0;
    if(rev){
        curr -> next = rev;
        tail = rev -> val;
        rev -> next = 0;
        if(rev->prev) temp = rev->prev->val;
        else Is_rev = 0;
        rev -> prev = curr;

    }
    return temp;
}

void Append_Node(ListNode* header, ListNode* node) {
    header -> next = node;
    node -> prev = header;
}

void Forward(ListNode* cur, int* ptr){
    ListNode* temp = cur;
    if(cur -> next){
        cur = cur -> next;
        // cur -> prev = temp;
    }
    *ptr = cur->val;

}

void Backward(ListNode* cur, int* ptr){
    ListNode* temp = cur;
    if(cur -> prev){
        cur = cur -> prev;
        // cur -> next = temp;
    }
   *ptr = cur->val;
}

int Combine(ListNode* cur, int x, ListNode* header[], int* p, int rev) {
    // ListNode* temp = cur;
    if(cur -> next)
        cur -> next -> prev = 0;
    ListNode* curr = cur;
    ListNode* ptr = header[x];
    if(!ptr->next){ //backward
        if(ptr){
            curr -> next = ptr;
            ptr = ptr->prev;
            curr -> next -> prev = curr;
            curr = curr->next;
        }
        rev = ptr -> val;
        tail = x;
        Is_rev = 1;
    }
    else{
        curr -> next = header[x];
        curr -> next -> prev = cur;
        Is_rev = 0;
    }
    *p = cur -> next -> val;
    return rev;
}

int main() {
    int n, l, x, ptr = 1, ptr2 = 2;
    char action;
    ListNode* header[100003];
    // ListNode* rev = new ListNode(0);
    int rev = 0;
    for(int i=0; i<100003; i++){
        header[i] = new ListNode(i);
    }
    scanf("%d %d", &n, &l);
    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        for(int j = 1; j < x; j++) {
            // ++ptr2;
            Append_Node(header[ptr], header[ptr2]);
            ptr2++;
            ptr++;
        }
        header[ptr]->next = 0;
        ++ptr;
        ++ptr2;
    }
    ptr = 1;
    //////////////////////////
    for(int i = 0; i < l; i++) {
        scanf(" %c", &action);
        if(Is_rev){
            rev = Reverse(header[tail], header[rev]);
        }
        if(action == 'F') {
            Forward(header[ptr], &ptr);

        }
        else if(action == 'B') Backward(header[ptr], &ptr);
        else {
            scanf("%d", &x);
            rev = Combine(header[ptr], x, header, &ptr, rev);
        }
        // Print_Node(header[1]);
        printf("%d\n", ptr);
    }
}