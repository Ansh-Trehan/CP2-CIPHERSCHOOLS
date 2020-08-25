//https://www.geeksforgeeks.org/inorder-successor-in-binary-search-tree/

#include <bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	struct node* left;
	struct node* right;
	struct node* parent;
};

struct node* newNode(int data)
{
	struct node* node = (struct node*)malloc(sizeof(struct node));
	node->data = data;
	node->left = NULL;
	node->right = NULL;
	node->parent = NULL;
	return (node);
}

struct node* insert(struct node* node, int data)
{
	if (node == NULL)
		return (newNode(data));
	else
	{
		struct node* temp;
		if (data <= node->data)
		{
			temp = insert(node->left, data);
			node->left = temp;
			temp->parent = node;
		}
		else
		{
			temp = insert(node->right, data);
			node->right = temp;
			temp->parent = node;
		}
		return node;
	}
}

int main()
{
	struct node *root = NULL, *temp, *succ, *min;
	root = insert(root, 20);
	root = insert(root, 8);
	root = insert(root, 22);
	root = insert(root, 4);
	root = insert(root, 12);
	root = insert(root, 10);
	root = insert(root, 14);
	temp = root->left->right->right;
	if (temp->right != NULL)
	{
		struct node* current = temp->right;
		while (current->left != NULL)
			current = current->left;
		succ= current;
	}
	struct node* p = temp->parent;
	while (p != NULL && temp == p->right)
	{
		temp = p;
		p = p->parent;
	}
	succ= p;
	if (succ != NULL)
		cout<<"Inorder Successor of "<<temp->data<<" is "<<succ->data;
	else
		cout<<"Inorder Successor doesn't exit";
	getchar();
	return 0;
}