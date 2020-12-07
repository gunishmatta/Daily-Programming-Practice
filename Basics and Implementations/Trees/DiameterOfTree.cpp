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
    data = d;
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
void bfs(node* root)
{
  queue<node*> q;
  q.push(root);
  q.push(NULL);

  while (!q.empty()) {
  node* front = q.front();
if(front==NULL)
{
  cout<<endl; //print next level in a new line
q.pop();
if(!q.empty())
{
  q.push(NULL);
}
}
else{
  cout<<front->data<<" ";
  q.pop();
  if(front->left)
  {
    q.push(front->left);
  }
  if(front->right)
  {
    q.push(front->right);
  }
}
  }

}
int countNodes(node* root)
{
if(root==NULL)
{
  return 0;
}
  return 1+countNodes(root->left)+countNodes(root->right);
}
int sumofNodes(node *root)
{
  if(root==NULL)
  {
    return 0;
  }
  return root->data+sumofNodes(root->left)+sumofNodes(root->right);
}
int height(node* root)
{
  if(root==NULL)
  {
    return 0;
  }
  int left = height(root->left);
  int right = height(root->left);
    return max(left,right)+1;
}

class HBPair
{
public:
  int height;
  bool balanced;

};
HBPair checkBalanced(node* root)
{
  HBPair p;
  if(root ==NULL)
  {
    p.height =0;
    p.balanced = true;
    return p;
  }
  HBPair left = checkBalanced(root->left);
  HBPair right = checkBalanced(root->right);

  p.height = max(left.height,right.height)+1;

  if((abs(left.height-right.height)<=1) && left.balanced && right.balanced)
  {
    p.balanced = true;
  }
  else
  {
    p.balanced = false;
  }
  return p;
}
int main() {
node* root = buildTree();
//cout<<countNodes(root);
if(checkBalanced(root).balanced)
{
  cout<<"balanced";

}
else
{
  cout<<"NOt balanced";
}
  return 0;
}
