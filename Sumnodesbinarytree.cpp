//sum of data of node in binary tree//
#include"bits/stdc++.h"
using namespace std;
struct Node
{
	int data;
	struct Node* left;
	struct Node* right;
	
	Node(int val)
	{
		
		data=val;
		left=NULL;
		right=NULL;
	
	}	
};
int sumNodes(Node* root)
{
if(root=NULL)
{
return 0;	
}
return sumNodes(root->left) +  sumNodes(root->right) + root->data;	
}
int main()
{
	struct Node* root = new Node(1);
	root->left=new Node(1);
	root->right=new Node(4);
	root->right->right=new Node(6);
	root->left->left=new Node(3);
	cout<<sumNodes(root)<<"\n";
	
}
