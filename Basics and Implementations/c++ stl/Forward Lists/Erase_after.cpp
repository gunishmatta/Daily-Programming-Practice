#include<iostream>
#include<forward_list>
using namespace std;
int main() {
  forward_list<int> f1 = {1,3,5,7,9};
forward_list<int>::iterator itr;
//
// for (auto f:f1) {
//   cout<<f<<endl;
// }

itr = f1.erase_after(f1.begin());

for (auto f:f1) {
  cout<<f<<endl;
}

  return 0;
}
