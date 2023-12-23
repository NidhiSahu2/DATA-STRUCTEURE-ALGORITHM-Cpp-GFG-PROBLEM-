//height of nodes in binary tree//
//how to find calculate height of tree//

#include"bits/stdc++.h"
#include<iostream>
using namespace std;
struct Node
{
	int data;
struct	Node* right;
struct	Node* left;

Node(int val)
{
data =val;
left=NULL;
right=NULL;	
}
};
int calcHeight(Node* root){

if(root=NULL)
{
	return 0;
}
int Llength=calcHeight(root->left);
int rlength=calcHeight(root->right);
return (max(Llength,rlength)+1);
}
int main(){

struct Node* root=new Node(1);
	root->left=new Node(2);
	root->right=new Node(3);
	root->left->right=new Node (4);
	root->right->right=new Node(5);
	cout<<calcHeight(root);
	
	return 0;
}
