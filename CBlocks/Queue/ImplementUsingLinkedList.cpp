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
class Queue
{
  Node *front, *rear;
  Queue()
  {
    front = rear = NULL;
  }
  void enqueue(int x)
  {
    Node * temp = new Node(x);

  }

};
int main() {

  return 0;
}
