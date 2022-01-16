// Serialize and deserialize a tree

#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	Node *left;
	Node *right;
};

Node *newNode(int data)
{
	Node *node = (Node*)malloc(sizeof(Node));
	node->data=data;
	node->left=NULL;
	node->right=NULL;
	return node;
}

Node *deserialise(int arr[], Node *root, int i, int n)
{
	if(i<n)
	{
		Node *temp=newNode(arr[i]);
		root=temp;

		root->left=deserialise(arr, root->left, 2*i + 1, n);

		root->right=deserialise(arr, root->right, 2*i + 2, n);
	}
	return root;
}

vector<int> serialize(Node *root)
{
	vector<int> res;

	if(root->left)
	{
		vector<int> temp=serialize(root->left);
		for(auto itr=temp.begin(); itr!=temp.end(); itr++)
			res.pb(*itr);
	}
	res.pb(root->data);
	if(root->right)
	{
		vector<int> temp=serialize(root->right);
		for(auto itr=temp.begin(); itr!=temp.end(); itr++)
			res.pb(*itr);
	}

	return res;
}

int main()
{
	int n;
	cin>>n;
	int arr[n];

	for(int i=0; i<n; i++)
		cin>>arr[i];

	Node *root = deserialise(arr, root, 0, n);

	vector<int> A = serialize(root);

	return 0;
}