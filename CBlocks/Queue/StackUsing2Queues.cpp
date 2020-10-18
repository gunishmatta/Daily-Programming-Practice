#include<iostream>
#include<queue>
using namespace std;
class Stack{
  queue<int> q1,q2;
  int csize;
publid:
Stack()
{
  csize =0;
}
void push(int x)
{
  csize++;
  //Put x first in empty q2
  q2.push(x);

  //push all remaining elements in q1 to q2
while (!q1.empty()) {
q2.push(q1.front());
q1.pop();

}
swap(q1,q2);

}
  void pop()
  {
    if(q1.empty())
    {
      return;
    }
    else
    q1.pop();
    csize--;
  }
  int top()
  {
    if(q1.empty())
    {
      return -1;
    }
    else
return q1.front();

  }
  bool empty()
  {
    return csize==0;
  }
};
int main() {
Stack s;
s.push(2);
s.push(3);
s.push(4);
cout<<s.top();

  return 0;
}
