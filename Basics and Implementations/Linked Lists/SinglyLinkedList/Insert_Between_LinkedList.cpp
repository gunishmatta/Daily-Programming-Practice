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
void insertBetween(Node *&head,int data,int pos)
{
  if (head==NULL or pos==0) {
insertAtHead(head,data);
return;
  }

else  if(pos>length(head))
{
  insertAtTail(head,data);
}
else{
//take pos-1 jumps
int jump = 1;
Node *temp = head;
while (jump<=pos-1) {
temp=temp->next;
jump++;
}
Node *n = new Node(data);
n->next = temp->next;
temp->next=n;
return;
}

}

int main() {
Node *head = NULL;
insertAtHead(head,3);
insertAtHead(head,2);
insertAtHead(head,1);
printList(head);
cout<<endl;
insertBetween(head,5,2);
printList(head);
cout<<endl;
insertBetween(head,7,2);
printList(head);
  return 0;
}
