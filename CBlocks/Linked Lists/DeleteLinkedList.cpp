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

void deleteHead(Node *&head)
{
  if(head==NULL)
  {
    return;
  }
Node *temp = head->next;
delete head;
head = temp;
}
void DeleteTail(Node *&head)
{
  if(head==NULL)
  {
    return;
  }
  if(head->next==NULL)
  {
    delete head;
    return;
  }
  Node *second_last = head;
  while(second_last->next->next!=NULL)
  {
    second_last= second_last->next;
  }
  delete (second_last->next);
  second_last->next = NULL;

}
int main() {
  Node *head = NULL;
  insertAtHead(head,3);
  insertAtHead(head,2);
  insertAtHead(head,1);
  printList(head);
cout<<endl;
  DeleteTail(head);
  printList(head);

  return 0;
}
