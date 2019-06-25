#include <iostream>

using namespace std;

struct Node
{
	int data;
	int cright;
	Node *left;
	Node *right;

	Node(int data, int cright = 0, Node *left = 0, Node *right = 0)
		: data(data), cright(cright), left(left), right(right) {}
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
		(a->cright) += 1;
	}
}

int findMax(Node *a, int x)
{
	if (!a)
	{
		return 0;
	}
	if (x < a->data)
	{
		return findMax(a->left, x) + a->cright + 1;
	}
	else if (x > a->data)
	{
		return findMax(a->right, x);
	}
	else if (x == a->data)
	{
		return a->cright;
	}
}

int main()
{
	Node *root = 0;
	int n, x, y, z;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d %d", &x, &y);
		if (x == 1)
		{
			insert(root, y);
		}
		else
		{
			z = findMax(root, y);
			printf("%d\n", z);
		}
	}
}
