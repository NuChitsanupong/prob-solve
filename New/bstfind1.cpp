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
    return 0;
  else if (x == r->val)
    return 0;
  else if (x < r->val)
    find(r->left, x);
  else
    find(r->right, x);
}
main()
{
  TreeNode *root = 0;

  int n;
  cin >> n;
  int x[n], k[n];
  for (int i = 0; i < n; i++)
  {
    cin >> x[i] >> k[i];
  }
  for (int i = 0; i < n; i++)
  {
    if (x[i] == 1)
      insert(root, k[i]);
    else if (x[i] == 2)
    {
      if (find(root, k[i]))
        cout << "1" << endl;
      else
        cout << "0" << endl;
    }
  }
}
