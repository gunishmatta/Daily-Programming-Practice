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
  node* root = new node(d);
  root->left = buildTree();
  root->right = buildTree();
  return root;
}
void inorder(node* root)
{
  inorder(root->left);
  cout<<root->data<<" ";
  inorder(root->right);
}
int main() {
node* root = buildTree();
inorder(root);

  return 0;
}
