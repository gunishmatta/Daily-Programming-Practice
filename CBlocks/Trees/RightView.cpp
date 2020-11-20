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

void printRightView(node* root,int level,int &maxLevel)
{

//first go to root then right then left

if(root==NULL)
{
    return;
}

if(maxLevel<level)
{
    cout<<root->data<<" ";
    maxLevel = level;
}
//right 
printRightView(root->right,level+1,maxLevel);
//left
printRightView(root->left,level+1,maxLevel);


}

int main() {
node* root = buildTree();
int maxLevel = -1;

printRightView(root,0,maxLevel);

  return 0;
}
