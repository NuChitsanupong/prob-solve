#include <iostream>
#include <cstdio>
#include <stdlib.h>

using namespace std;

typedef int valueType;

struct TreeNode {
  	valueType val;
  	int countleft;
  	int countright;
  	TreeNode* left;
  	TreeNode* right;

  	TreeNode(valueType val, int countright=0, int countleft=0, TreeNode* left=0, TreeNode* right=0)
    	: val(val), countright(countright), countleft(countleft), left(left), right(right) {}
};

void insert_tree (TreeNode*& r, valueType x) {
	if (!r) {
		r = new TreeNode(x);
	}
	else if (x < r->val) {
		(r->countleft) += 1;
		insert_tree(r->left, x);
	}
	else if (x > r->val) {
		(r->countright) += 1;
		insert_tree(r->right, x);
	}
}

int findMax (TreeNode* r, valueType x) {
	if (!r) return 0;
	else if (x < r->val)
		return r->countright + findMax(r->left, x) + 1;
	else if (x == r->val)
		return r->countright;
	else if (x > r->val)
		return findMax(r->right, x);
}

int main() {
	TreeNode* root = 0;
	int n, x, y;
	scanf("%d", &n);
	for (int i=0; i<n; i++) {
		scanf("%d%d", &x, &y);
		if (x == 1)
			insert_tree(root, y);
		else if (x == 2) {
			int ans = findMax(root, y);
			printf("%d\n", ans);
		}
	} 
}
