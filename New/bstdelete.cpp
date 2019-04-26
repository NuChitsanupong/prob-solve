#include <iostream>
#include <cstdio>
#include <stdlib.h>
using namespace std;

typedef int valueType;

struct TreeNode
{
  valueType val;
  TreeNode* left;
  TreeNode* right;

  TreeNode(valueType val, TreeNode* left=0, TreeNode* right=0)
    : val(val), left(left), right(right) {}
};

void insert(TreeNode*& r, valueType x)
{
  if(!r)
    r = new TreeNode(x);
  else if(x < r->val)
      insert(r->left,x);
  else if(x > r->val)
      insert(r->right,x);
}


TreeNode* find(TreeNode* r, valueType x)
{
    if(!r) return r;
    if(r->val == x) return r;
    if(x < r->val) find(r->left,x);
    else if(x>r->val) find(r->right,x);
}

TreeNode* findMin(TreeNode* node)
{
    TreeNode* r = node;
    while(r->left != NULL)
        r = r->left;
    return r;

}

TreeNode* Delete(TreeNode* r, valueType x)
{
    if(r == NULL) return r;
    if(x < r->val) r->left = Delete(r->left,x);
    else if(x > r->val) r->right = Delete(r->right,x);
    else{
        if(r->left == NULL){
            TreeNode* temp = r->right;
            free(r);
            return temp;
        }
        else if(r->right == NULL){
            TreeNode* temp = r->left;
            free(r);
            return temp;
        }

        TreeNode* temp = findMin(r->right);
        r->val = temp->val;
        r->right = Delete(r->right,temp->val);

    }
    return r;
}


main()
{
  TreeNode* root = 0;

  int n,c=0;
  cin >> n;
  int x[n],k[n],ans[n];
  for(int i=0; i<n; i++) {
    cin >> x[i] >> k[i];
    if(x[i] == 1)
        insert(root,k[i]);
    else if(x[i] == 2){
        if(find(root,k[i]))
           ans[c] = 1;
        else
            ans[c] = 0;
        c++;
    }
    else if(x[i] == 3){
        if(find(root,k[i]))
            Delete(root,k[i]);
    }
  }
  for(int i=0; i<c; i++) {
        cout << ans[i] << endl;
  }
}
