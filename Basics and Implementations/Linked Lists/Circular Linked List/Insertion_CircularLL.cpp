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
node* n = new Node(data);
node* temp = head;
n->next = head;
if(temp!=NULL)
{
while (temp->next!=head) { //circular LL points to head
temp = temp->next;
}
temp->next = n;


}
head = n;

}
void printList(Node *node)
{
  while(node!=NULL)
  {
    cout<<node->data<<" "; //display data of current node
    node = node->next; //jump to next node
  }
}
int main() {
Node *head = NULL;
insertAtHead(head,3);
insertAtHead(head,2);
insertAtHead(head,1);
printList(head);
  return 0;
}
