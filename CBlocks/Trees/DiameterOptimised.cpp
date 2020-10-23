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
  node* root = new node(d);
root->left = buildTree();
root->right = buildTree();
}

void BFS(node* root)
{
  queue<node*> q;
  q.push(root->data);
  q.push(NULL);

while (!q.empty()) {
node* front = q.front();
//check if front is NULL then level change
if(front ==NULL)
{
  cout<<endl;
q.pop();//remove null
if(!q.empty())
{
  q.push(NULL); //if q is not empty then push null
}
}
else
{
  cout<<front->data<<" "; //print data of front
  q.pop(); //pop it after print
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

class Pair
{
public:
  int height;
  int diameter;
}
Pair fastdiameter(node* root)
{
  Pair p;
  if(root==NULL)
  {
    p.diameter = p.height =0;
    return p;
  }
  Pair left = fastdiameter(root->left);
  Pair right = fastdiameter(root->right);
  p.height = max(left.height+right.height)+1;
  p.diameter = max((left.height+right.height),max(left.diameter,right.diameter));
  return p;
}

int main(int argc, char const *argv[]) {
  node* root = buildTree();
  BFS(root);
  Pair p = fastdiameter(root);
  cout<<p.height<<" ";
  cout<<p.diameter<<" ";
  return 0;
}
