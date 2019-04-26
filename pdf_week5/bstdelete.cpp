#include <iostream>

using namespace std;

struct Node
{
    Node *left;
    Node *right;
    int data;

    Node(int data, Node *left = 0, Node *right = 0)
        : data(data), left(left), right(right) {}
};

void insert(Node *&a, int x)
{
    if (!a)
    {
        a = new Node(x);
    }
    else if (x < a->data)
    {
        insert(a->left, x);
    }
    else if (x > a->data)
    {
        insert(a->right, x);
    }
}

bool find(Node *&a, int x)
{
    if (!a)
    {
        return a;
    }
    if (x < a->data)
    {
        find(a->left, x);
    }
    else if (x > a->data)
    {
        find(a->right, x);
    }
    else
    {
        return 1;
    }
}

Node* fleft(Node* node)
{
    Node* a = node;
    while(a->left != NULL)
        a = a->left;
    return a;
}

Node *del(Node *a, int x)
{
    if (!a)
    {
        return a;
    }
    if (x > a->data)
    {
        a->right = del(a->right, x);
    }
    else if (x < a->data)
    {
        a->left = del(a->left, x);
    }
    else
    {
        if (!(a->left))
        {
            Node *tmp = a->right;
            free(a);
            return tmp;
        }
        else if (!(a->right))
        {
            Node *tmp = a->left;
            free(a);
            return tmp;
        }
        Node* tmp = fleft(a->right);
        a->data = tmp->data;
        a->right = del(a->right, tmp->data);
    }
    return a;
}

main()
{
    Node *root = 0;
    int n;
    ios::sync_with_stdio(false);
    scanf("%d", &n);
    int cm[n], no[n];
    for (int i = 0; i < n; i++)
    {
        ios::sync_with_stdio(false);
        scanf("%d %d", &cm[i], &no[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (cm[i] == 1)
        {
            insert(root, no[i]);
        }
        else if (cm[i] == 2)
        {
            printf("%d\n", find(root, no[i]));
        }
        else if (cm[i] == 3)
        {
            if (find(root, no[i]))
            {
                del(root, no[i]);
            }
        }
    }
}
