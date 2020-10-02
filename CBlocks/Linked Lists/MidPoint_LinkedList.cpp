#include<iostream>
using namespace std;
class Node
{
public:
  int data;
  Node *next;
  Node(int d)
{
  data = d;
  next = NULL;
}
};

void insertAtHead(Node *&head,int data)
{
  if (head==NULL) {
head = new Node(data);
return;
  }
  Node *node = new Node(data);
  node->next = head; //point the next of new node to head
  head =node; //point the head to new node

}
void printList(Node *node)
{
  while(node!=NULL)
  {
    cout<<node->data<<" "; //display data of current node
    node = node->next; //jump to next node
  }
}
Node* input()
{
  int d;
  Node *head=NULL;
  cin>>d;
  while (d!=-1) {
insertAtHead(head,d);
cin>>d;
  }
  return head;
}
Node* middle(Node *head)
{
  if (head==NULL or head->next ==NULL) {
    return head;
    }
  Node *slow=head;
  Node *fast=head->next;
  while(fast!=NULL and fast->next!=NULL)
  {
    fast = fast->next->next;
    slow = slow->next;

  }
  return slow;
}
int main() {
Node *head = input();

Node *mid = middle(head);
cout<<mid->data;

  return 0;
}
