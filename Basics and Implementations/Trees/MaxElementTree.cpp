#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class node
{
public:
  int data;
  node* left;
  node* right;
  node(int d)
  {
    data = d;1
    left = right = NULL;
  }

};
node* buildTree()
{
  int d;
  cin>>d;
  if(d==-1)
  {
    return NULL;
  }
node*  root = new node(d);
  root->left = buildTree();
  root->right = buildTree();

  return root;
}

int findMax(node* root)
{
  int max = INT_MIN;
  int root_val = root->data;
  int left,right;


  if(root!=NULL)
  {
    root_val = root->data;
    left = findMax(root->left);
    right = findMax(root->right);

    if(left>right)
    {
      max = left;
    }
    else
    max = right;

    if(root_val>max)
    {
      max = root_val;
    }

  }

  return max;
}

int main() {
node* t = buildTree();

cout<<findMax(t)<<endl;
  return 0;
}
