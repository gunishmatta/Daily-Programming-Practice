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
  data =d;
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
int height(node* root)
{
  if(root==NULL)
  {
    return 0;
  }
  else
  {
    int left = height(node->left);
    int right = height(node->right);
  }
  return max(left,right);

}
void printgivenLevel(Node *root, int level)
{
  if(root==NULL)
  {
    return;
  }
  if(level==-1)
  {
cout<<root->data<<" ";
  }
  else
  if(level>1)
  {
    printgivenLevel(root->left,level-1);
    printgivenLevel(root->right,level-1);
  }
}
printAllLevel(Node *root)
{
  int h = height(root);
  for (int i = 0; i <=h; i++) {
    printgivenLevel(root,i);
  }
}
int main() {
  node *root = buildTree();

  cout << "Level Order traversal of binary tree is \n";
  printAllLevel(root);

  return 0;
}
