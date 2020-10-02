#include<iostream>
using namespace std;
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
int getLength( Node *head)
{
if (head == NULL)
{
cout << "\nError : Invalid node pointer !!!\n";
return 0;
}

int length =0;
while(head != NULL)
{
head = head->next;
length++;
}
return length;
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
Node* findNode(Node *head, int k)
{
  if(k > getLength(head))
{
cout << "\nError : n is greater than length of Linked List\n";
return NULL;
}

  Node *fast=head;
  Node *slow=head;
  for (int i = 0; i < k; i++) {
    fast = fast->next;
  }
  while(fast->next != NULL)
{
fast = fast->next;
slow = slow->next;
}
return slow;
}
int main() {
Node *head = input();
cout<<"Enter node";
int n;
cin>>n;
Node *NthNode = findNode(head, n);
cout<<NthNode->data;

  return 0;
}
