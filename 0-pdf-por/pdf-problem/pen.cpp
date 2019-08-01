<<<<<<< HEAD
#include <iostream>
using namespace std;
typedef char valueType;
char top;
struct ListNode
{
  valueType val;
  ListNode* next;

  ListNode(valueType val, ListNode* next=0)
    : val(val), next(next) {}
};

void append(ListNode *header, char val) {
    ListNode* node = new ListNode(val);
    while(header -> next) {
        header = header -> next;
    }
    header -> next = node;
}

void pop(ListNode* header) {
    while(header -> next) header = header ->next ;

}

int main() {
    string a;
    cin >> a;
    ListNode* header = 0;
    for(int i = 0; i < a.length(); i++){
        if(b[j-1] == '(' && a[i] == ')') {
            b[--j] = '0';
        }
        else if(b[j-1] == '{' && a[i] == '}') {
            b[--j] = '0';
        }
        else if(b[j-1] == '[' && a[i] == ']') {
            b[--j] = '0';
        }
        else {
            b[j++] = a[i];
        }
    }
    cout << a;
=======
#include <iostream>
using namespace std;
typedef char valueType;
char top;
struct ListNode
{
  valueType val;
  ListNode* next;

  ListNode(valueType val, ListNode* next=0)
    : val(val), next(next) {}
};

void append(ListNode *header, char val) {
    ListNode* node = new ListNode(val);
    while(header -> next) {
        header = header -> next;
    }
    header -> next = node;
}

void pop(ListNode* header) {
    while(header -> next) header = header ->next ;

}

int main() {
    string a;
    cin >> a;
    ListNode* header = 0;
    for(int i = 0; i < a.length(); i++){
        if(b[j-1] == '(' && a[i] == ')') {
            b[--j] = '0';
        }
        else if(b[j-1] == '{' && a[i] == '}') {
            b[--j] = '0';
        }
        else if(b[j-1] == '[' && a[i] == ']') {
            b[--j] = '0';
        }
        else {
            b[j++] = a[i];
        }
    }
    cout << a;
>>>>>>> c46aa179a8a23e5373040e0f81a74ba2ccfabaaf
}