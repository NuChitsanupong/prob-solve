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
    else if(x > a->data)
    {
        find(a->right, x);
    }
    else 
    {
        return 1;
    }
}

main()
{
    Node *root = 0;
    int n;
    cin >> n;
    int cm[n], no[n];
    for (int i = 0; i < n; i++)
    {
        cin >> cm[i] >> no[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (cm[i] == 1)
        {
            insert(root, no[i]);
        }
        else if (cm[i] == 2)
        {
            cout << find(root, no[i]) << endl;
        }
    }
}
