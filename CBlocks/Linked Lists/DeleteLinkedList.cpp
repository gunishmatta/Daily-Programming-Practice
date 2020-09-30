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

int length(Node *node)
{
  int count =0;
  while(node!=NULL)
  {
    count++;
    node = node->next;
  }
  return count;
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
void deleteBetween(Node *&head, int pos)
{

    if (head==NULL or pos==0) {
deleteHead(head);
  return;
    }
    else  if(pos>length(head))
    {
      DeleteTail(head);
    }
    else
    {
      int jump =1;
      Node *previous_node = head;
      while(jump<=pos-1){
        previous_node = previous_node->next;
        jump++;
      }
      // Node temp->next is the node to be deleted
    // Store pointer to the next of node to be deleted
    Node *next =previous_node->next->next;
    delete (previous_node->next);
     previous_node->next = next;
    }
}
int main() {
  Node *head = NULL;
  insertAtHead(head,3);
  insertAtHead(head,2);
  insertAtHead(head,1);
  printList(head);
cout<<endl;
deleteBetween(head,1);
  printList(head);

  return 0;
}
