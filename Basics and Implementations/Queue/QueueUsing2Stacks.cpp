#include<iostream>
#include<stack>
using namespace std;
class Queue{
stack<int> s1,s2;
int top()
{

}
  void enQueue(int x)
  {
  //move all elements from s1 to s2
  while (!s1.empty()) {
    s2.push(s1.top());
    s1.pop();
  }
  //push item into s1
  s1.push(x);
//push everything back to s1
while (!s2.empty()) {
s1.push(s2.top());
s2.pop();
}

  }

void deQueue()
{
  if(s1.empty())
  {
    return;
  }
  s1.pop();

}

};
int main() {
Queue q;
q.enQueue(1);
q.enQueue(2);
q.enQueue(3);

cout<<q.top();

  return 0;
}
