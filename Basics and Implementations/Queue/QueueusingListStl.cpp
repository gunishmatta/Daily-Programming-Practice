#include<iostream>
#include<list>
using namespace std;
class Queue
{
  int currentSize;
list<int> l;
public:
  Queue()
  {
    currentSize =0;
  }

  bool isEmpty()
  {
return currentSize ==0;
  }
  void push(int data)
  {
    l.push_back(data);
currentSize = currentSize+1;
  }
  void pop()
  {
    if(!isEmpty())
    {
      currentSize--;
    l.pop_front();
}
  }
  int front()
  {
    return l.front();
  }
};

int main(int argc, char const *argv[]) {
  Queue q;
  q.push(2);
    q.push(3);
      q.push(5);
        q.push(1);

while (!q.isEmpty()) {
cout<<q.front()<<" ";
q.pop();
}

  return 0;
}
