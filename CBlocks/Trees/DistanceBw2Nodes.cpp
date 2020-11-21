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

node* lca(node* root,int a, int b)
{
  if(root==NULL)
  {
    return NULL;
  }

  if(root->data==a or root->data ==b)
  {
    return root;
  }

  int leftans = lca(root->left,a,b); 
  int rightans= lca(root->right,a,b);

  if(leftans!=NULL and rightans != NULL)
  {
    return root;
  }

  if(leftans!=NULL)
  {
    return leftans;
  }
  else

    return rightans;

}


int search(node* root, int key, int level)
{
  if(root==NULL)
  {
    return -1;
  }

if(root->data == key)
{
  return level;
}

int left = search(root->left,key,level+1);
if(left!=-1)
{
  return left;
}
else
  return search(root->right,key,level+1);


}

int findDistance(node* root,int a, int b)
{
  node* lca_node = lca(root,a,b);
  int l1 = search(lca_node,a,0);
  int l2 = search(lca_node,b,0);

  return l1+l2;
}

int main() {
node* t = buildTree();

  return 0;
}
