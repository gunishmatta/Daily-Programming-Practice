//insert node at front of linked list
#include<iostream>
using namespace std;
class Node
{
public:
  int data;
  Node *next;
};
void printList(Node *n)
{
  while (n!=NULL) {
  cout<<n->data<<" "; //prints data stored in node n
  n = n->next; //n jumps to next linked node
  }
}
void push(Node *&head,int new_data)
{
  Node* new_node = new Node(); //allocate node
  new_node->data = new_data; //put data in node
  new_node->next = (head); //make next of new node as head
//Move head to point to new node
head =new_node;
}
int main() {
  Node *head =NULL;
  Node *second=NULL;
  Node *third=NULL;

head = new Node(); //allocate 3 nodes in heap
second = new Node();
third = new Node();

head->data=1; //asign data to first node
head->next = second; //Link first node to second node

second->data =2;
second->next = third;

third->data =30;
third->next = NULL;
printList(head);
cout<<endl;
push(head,6);
  printList(head);
  return 0;
}
