#include<iostream>
#include<forward_list>
using namespace std;
int main() {
  forward_list<int> f1 = {1,3,5,7,9};

cout<<"Before Push"<<endl;
for (auto f:f1) {
  cout<<f<<endl;
}

f1.pop_front(); //removes first element of list
cout<<"After Push"<<endl;

for (auto f:f1) {
  cout<<f<<endl;
}

  return 0;
}
