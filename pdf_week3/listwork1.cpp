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

void print_list(ListNode *node)
{
    while (node != 0)
    {
        cout << node->val << endl;
        node = node->next;
    }
}

void insert_front(ListNode *header, valueType x)
{
    ListNode *n1 = new ListNode(x);
    n1->next = header->next;
    header->next = n1;
}

main()
{
    ListNode *header = new ListNode(0);
    int x;
    cin >> x;
    for (int i = 0; i < x; i++)
    {
        char dir;
        int a;
        cin >> dir >> a;
        if (dir == 'I' || dir == 'i')
        {
            insert_front(header, a);
        }
        else
        {
            ListNode *x = header;
            x->next = header->next;
            x->val = header->val;
            for (int j = 0; j < a; j++)
            {
                cout << 'k' << endl;
                x->next = x->next->next;
                x->val = header->next->val;
            }
            ListNode *xx = x->next->next;
            delete x->next;
            x->next = xx;
        }
    }
    print_list(header->next);
}