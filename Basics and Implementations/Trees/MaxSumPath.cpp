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

class Pair
{

public:
  int branchSum;
  int maxSum;

  Pair()
  {
    branchSum =0;
    maxSum=0;
  }

};

Pair maxsumPath(node* root)
{
  Pair p;
  if(root==NULL)
  {
    return P;
  }

Pair left = maxsumPath(root->left);
Pair right = maxsumPath(root->right);


int op1 = root->data;
int op2 = left.branchSum+root->data;
int op3 = right.branchSum+root->data;
int op4 = left.branchSum+root->data+right.branchSum;

int current_ans_with_root = max(op1,max(op2,max(op3,op4)));

//branch sum for current root

p.branchSum = max(left.branchSum,max(right.branchSum,0))+root->data; //we have used 0 to handle negative values
p.maxSum = max(left.maxSum,max(right.maxSum,current_ans_with_root));




}

int main() {
node* t = buildTree();

  return 0;
}
