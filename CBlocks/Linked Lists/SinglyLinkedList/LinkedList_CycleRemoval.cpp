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



void removeCycle(Node *head)
{
  int flag =0;
    Node* slow=head;
    Node* fast=head;
    while (fast!=NULL&&fast->next!=NULL) {
  fast = fast->next->next;
  slow = slow->next;
  if (fast==slow) {
flag =1;
  }
}
if(flag)
{
  slow = head;

  while (slow!=fast) {
    slow = slow->next;
    fast = fast->next;

  }
//Remove the cycle
fast->next = NULL;

}

}

int main() {
Node *list = input();
removeCycle(list);
printList(list);
  return 0;
}
