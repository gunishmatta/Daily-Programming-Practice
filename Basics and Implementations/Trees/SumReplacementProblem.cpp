#include<iostream>
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
int sumReplace(node* root)
{
  if(root==NULL)
  {
    return 0;
  }
  if(root->left==NULL && root->right==NULL)
  {
    return root->data;
  }
int leftSum = sumReplace(root->left);
int rightSum = sumReplace(root->right);

int temp = root->data;
root->data = leftSum+rightSum;
return temp+root->data;

}
int main() {
node* t = buildTree();

  return 0;
}
