<<<<<<< HEAD
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

void print(Node *a, int x)
{
    if (a->right != 0)
    {
        print(a->right, x + 1);
    }
    if (a->data != 0)
    {
        for (int i = 0; i < x; i++) 
        {
            cout << "...";
        }
        cout << "* " << a->data << endl;
    }
    if (a->left != 0)
    {
        print(a->left, x + 1);
    }
}

main()
{
    Node *root = 0;
    int n;
    cin >> n;
    int no[n];
    for (int i = 0; i < n; i++)
    {
        cin >> no[i];
    }
    for (int i = 0; i < n; i++)
    {
        insert(root, no[i]);
    }
    print(root, 0);
}
=======
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

void print(Node *a, int x)
{
    if (a->right != 0)
    {
        print(a->right, x + 1);
    }
    if (a->data != 0)
    {
        for (int i = 0; i < x; i++) 
        {
            cout << "...";
        }
        cout << "* " << a->data << endl;
    }
    if (a->left != 0)
    {
        print(a->left, x + 1);
    }
}

main()
{
    Node *root = 0;
    int n;
    cin >> n;
    int no[n];
    for (int i = 0; i < n; i++)
    {
        cin >> no[i];
    }
    for (int i = 0; i < n; i++)
    {
        insert(root, no[i]);
    }
    print(root, 0);
}
>>>>>>> c46aa179a8a23e5373040e0f81a74ba2ccfabaaf
