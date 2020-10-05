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
void printList(Node *node)
{
  while(node!=NULL)
  {
    cout<<node->data<<" "; //display data of current node
    node = node->next; //jump to next node
  }
}

void insertAtTail(Node *&head,int data)
{
  if(head==NULL)
  {
    head = new Node(data);
    return;
  }
  Node *tail = head;
  while(tail->next!=NULL)
  {
    tail = tail->next;

  }
  tail->next = new Node(data);

}

 int main(int argc, char const *argv[]) {

   Node *head = NULL;
   insertAtHead(head,3);
   insertAtHead(head,2);
   insertAtHead(head,1);
   printList(head);
   insertAtTail(head,4);
  return 0;
}
