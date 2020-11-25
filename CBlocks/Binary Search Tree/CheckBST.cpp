#include <iostream>
#include <queue>
using namespace std;

class node
{
	public:
	int data;
	node* left;
	node* right;

	node(int d)
	{
		data =d;
		left= NULL;
		right = NULL;
	}

};

node* insertBST(node * root,int data)
{
	
if(root==NULL)
{
	return new node(data);
}

if(data<=root->data)
{
	root->left = insertBST(root->left,data);

}
else
{
	root->right = insertBST(root->right,data);
}

return root;
}
node* build(){
	int d;
	cin>>d;
	node* root = NULL;
	while(d!=-1)
	{
		root=insertBST(root,d);
		cin>>d;
	}
return root;
}



void inorder(node * root)
{
	if(root==NULL)
	{
		return;
	}

inorder(root->left);
cout<<root->data<<"  ";
inorder(root->right);

}


bool search(node* root,int data)
{
	if(root==NULL)
	{
		return false;
	}

if(root->data==data)
{
	return true;
}

if(data<=root->data)
{
	bool leftPresent = search(root->left,data);	
}
else
{
	bool rightPresent = search(root->right,data);
}


}


bool isBST(node* root,int minVal=INT_MIN,int maxVal=INT_MAX)
{
	if(root==NULL)
	{
		return true;
	}

if(root->data>=minVal && root->data<=maxVal && isBST(root->left,minVal,root->data)&&isBST(root->right,root->data,maxVal))
{
	return true;
}

	return false;
}


int main(int argc, char const *argv[])
{
	node* root = build();
	inorder(root);
	

	return 0;
}