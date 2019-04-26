#include <iostream>

using namespace std;

typedef int valueType;

struct TreeNode
{
  valueType val;
  TreeNode *left;
  TreeNode *right;

  TreeNode(valueType val, TreeNode *left = 0, TreeNode *right = 0)
      : val(val), left(left), right(right) {}
};

void insert(TreeNode *&r, valueType x)
{
  if (!r)
  {
    r = new TreeNode(x);
  }
  else if (x < r->val)
  {
    insert(r->left, x);
  }
  else if (x > r->val)
  {
    insert(r->right, x);
  }
}
TreeNode *find(TreeNode *r, valueType x)
{
  if (!r)
  {    
    return r;
  }
  if (r->val == x)
  {
    return r;
  }
  if (x < r->val)
  {
    find(r->left, x);
  }
  else if (x > r->val)
  {
    find(r->right, x);
  }
}

void inorder(TreeNode *r, int c)
{
  if (!r)
  {
    return;
  }
  inorder(r->right, c + 1);
  for (int i = 0; i < c; i++)
    cout << "...";
  cout << "* " << r->val << endl;
  inorder(r->left, c + 1);
}

main()
{
  TreeNode *root = 0;
  int n;
  cin >> n;
  int x[n];
  for (int i = 0; i < n; i++)
  {
    cin >> x[i];
  }
  for (int i = 0; i < n; i++)
  {
    insert(root, x[i]);
  }
  inorder(root, 0);
}
