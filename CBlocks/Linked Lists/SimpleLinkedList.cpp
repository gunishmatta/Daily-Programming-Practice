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


  return 0;
}
