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
// Node* input()
// {
//   int d;
//   Node *head=NULL;
//   cin>>d;
//   while (d!=-1) {
// insertAtHead(head,d);
// cin>>d;
//   }
//   return head;
// }

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
void takeInput(Node *&head)
{
    int n;
    cin >> n;

    // If n is not equals to -1 insert
    // the node in the linked list
    while (n != -1) {

        // If head is NULL, insert at
        // the beginning of list
        if (head == NULL)
            insertAtHead(head, n);
        else
            insertAtTail(head, n);
        cin >> n;
    }
}


ostream& operator<<(ostream &os,Node *head)
{
  printList(head);
  return os;
}
istream& operator>>(istream &is,Node *head)
{
head=takeInput(head);
  return is;
}
int main() {
Node *head;
cin>>head;
cout<<head;
  return 0;
}
