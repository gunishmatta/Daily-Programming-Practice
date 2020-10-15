#include<iostream>
using namespace std;
class Queue
{
  int *arr;
  int currentSize,maxSize,front,rear;
public:
  Queue(int defaultSize = 5)
  {arr = new int[defaultSize];
    currentSize =0;
    maxSize = defaultSize;
    front = 0;
    rear = maxSize -1;

  }

  bool full()
  {
    return currentSize ==maxSize;
  }
  bool isEmpty()
  {
    return currentSize==0;
  }
  void push(int data)
  {
    rear = (rear+1)%maxSize;
    arr[rear]= data;
    currentSize++;
  }
  void pop()
  {
    front = (front+1)%maxSize;
    currentSize--;
  }
  int frontel()
  {
    if(!isEmpty())
    {
      return arr[front];}
      else
      {return -1;}

  }
  ~Queue()
  {
    if (arr!=NULL) {
delete [] arr;
arr = NULL;
    }
  }

};
int main(int argc, char const *argv[]) {
  Queue q;

for (int i = 0; i < 7; i++) {
q.push(i);
}
q.pop();
q.pop();
q.pop();
q.push(7);

  while(!q.isEmpty())
  {
    cout<<q.frontel()<<" ";
    q.pop();
  }

  return 0;
}
