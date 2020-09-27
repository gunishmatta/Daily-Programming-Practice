#include<iostream>
using namespace std;

class node
{
public:
  int data;
  node* next;
  node(int d) //constructor
  {
    data =d;
    next = NULL;
  }
};
void insertAtHead(node *&head,int d)  //pass by reference to manipulate the actual LL
{
  if (head==NULL) { //check of linked list is empty
head = new node(d);
return;
  }
node *n = new node(d);
n->next = head;
return;
}
void printList(node *head)
{
  while (head!=NULL) {
cout<<head->data<<" -> "
  head = head->next;
  }
}
int main() {
  node *head = NULL;
  insertAtHead(head,3);
    insertAtHead(head,2);
      insertAtHead(head,1);
        insertAtHead(head,0);
printList(head);
  return 0;
}
