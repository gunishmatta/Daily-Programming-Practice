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
node* buildTreeFromArray(int* a,int start,int end)
{
  if(start>end)
  {
    return NULL;
  }
  int mid  = (start+end)/2;
node* root = new node(a[mid]);
root->left = buildTreeFromArray(a,start,mid-1);
root->right = buildTreeFromArray(a,mid+1,end);

return root;
}
void printTree(node* root)
{
  if(root==NULL)
  {
    return;
  }
cout<<root->data<<" ";
printTree(root->left);
printTree(root->right);

}

int main()
{
int a[] ={1,2,3,4,5,6,7};
int n = 7;
node* root = buildTreeFromArray(a,0,n-1);

printTree(root);

return 0;
}
