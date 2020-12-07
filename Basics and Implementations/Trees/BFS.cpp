#include<iostream>
#include<queue>
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
  q.push(root->data);
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

int main() {
node* root = buildTree();

  return 0;
}
