#include <iostream>

using namespace std;

typedef int valueType;

struct ListNode
{
    valueType val;
    ListNode* next;

    ListNode(valueType val, ListNode* next=0)
    : val(val), next(next) {}
};

class LinkedList
{
    public:
    ListNode* header;
    ListNode* tail;
    void free_list();
    LinkedList();
    ~LinkedList();
    void print_list();
    void insert_front(valueType x);
    void append(valueType x);
    void delete_kList(int k);
    int num_list();
};

LinkedList::LinkedList()
{
    header = new ListNode(0);
    tail = header;
}

LinkedList::~LinkedList()
{
    free_list();
}

void LinkedList::print_list()
{
    ListNode* node = header->next;
    while(node != 0) {
    cout << node->val << endl;
    node = node->next;
  }
}

int LinkedList::num_list()
{
    int i=0;
    ListNode* node = header->next;
    while(node != 0) {
        i++;
        node = node->next;
    }
    return i;
}

void LinkedList::append(valueType x)
{

    ListNode* input = new ListNode(x);
    tail->next = input;
    tail = input;

}

void LinkedList::insert_front(valueType x)
{

    ListNode* input = new ListNode(x);
    if(header->next == 0) tail = input;
    input->next = header->next;
    header->next = input;

}

void LinkedList::free_list()
{

    ListNode* temp = header;
    header = header->next;
    delete(temp);

}

void LinkedList::delete_kList(int k)
{
    int i = 0;
    ListNode* node = header->next;
    ListNode* temp = header;
    while(node != 0) {
        i++;
        if(i==k){
            if(tail == node) tail = temp;
            temp->next = node->next;
            delete(node);
            //free_list();
        }
        temp = temp->next;
        node = node->next;
    }
}

int main()
{
    LinkedList list;
    int n;
    cin>>n;
    string ch [n];
    int input [n];
    for(int i=0 ; i<n ; i++){
        cin>>ch[i];
        if(ch[i] == "lr" || ch[i] == "rr"){
            if(ch[i] == "lr"){
                list.append(list.header->next->val);
                list.delete_kList(1);
            }
            else if(ch[i] == "rr"){
                list.insert_front(list.tail->val);
                list.delete_kList(list.num_list());
            }
        }
        else if (ch[i] == "li" || ch[i] == "ri"){
            cin>>input[i];
            if(ch[i] == "li")
                list.insert_front(input[i]);
            else if(ch[i] == "ri")
                list.append(input[i]);
        }
    }

    list.print_list();

}

