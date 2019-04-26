#include <iostream>

using namespace std;

typedef int valueType;

struct ListNode
{
    valueType val;
    ListNode *next;

    ListNode(valueType val, ListNode *next = 0)
        : val(val), next(next) {}
};

class LinkedList
{
  private:
    ListNode *header;
    void free_list();

  public:
    LinkedList();
    ~LinkedList();
    void print_list();
    void insert_front(valueType x);
    void delete_qList(int q);
};

LinkedList::LinkedList()
{
    header = new ListNode(0);
}

LinkedList::~LinkedList()
{
    free_list();
}

void LinkedList::print_list()
{
    ListNode *node = header->next;
    while (node != 0)
    {
        cout << node->val << endl;
        node = node->next;
    }
}

void LinkedList::insert_front(valueType x)
{
    ListNode *input = new ListNode(x);
    input->next = header->next;
    header->next = input;
}

void LinkedList::free_list()
{
    ListNode *temp = header;
    header = header->next;
    delete (temp);
}

void LinkedList::delete_qList(int q)
{
    int i = 0;
    ListNode *node = header->next;
    ListNode *temp = header;
    while (node != 0)
    {
        i++;
        if (i == q)
        {
            temp->next = node->next;
            delete (node);
        }
        temp = temp->next;
        node = node->next;
    }
}

int main()
{
    LinkedList list;
    int n;
    cin >> n;
    char ch[n];
    int input[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ch[i] >> input[i];
        if (ch[i] == 'I' || ch[i] == 'i')
            list.insert_front(input[i]);
        else if (ch[i] == 'D' || ch[i] == 'd')
            list.delete_qList(input[i]);
    }
    list.print_list();
}
