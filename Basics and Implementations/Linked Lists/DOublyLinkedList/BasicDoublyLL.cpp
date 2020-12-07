#include<iostream>
using namespace std;
class Node
{
  int data;
  Node* prev;
  Node* next;

}
int main() {
Node *head = NULL;
Node *first = NULL;
Node *second = NULL;
Node *third = NULL;

first->prev = head;
first->data = 1;
first->next = second;
second->prev = first;
second->data =2;
second->next = third;
third->prev = second;
second->data =3;
second->next = NULL;

head = first;


  return 0;
}
