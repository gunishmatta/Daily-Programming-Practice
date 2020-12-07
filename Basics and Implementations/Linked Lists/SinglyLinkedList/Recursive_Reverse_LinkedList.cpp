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
Node* recreverse(Node *head)
{
  if (head==NULL or head->next==NULL) {
  return head;
  }
Node *smallhead = recreverse(head->next);
Node* temp = head->next;
temp->next = head;
head = NULL;

return smallhead;

}
int main() {
Node *head = input();

printList(head);
cout<<endl;
recreverse(head);
cout<<endl;
printList(head);

  return 0;
}
