#include<iostream>
#include<forward_list>
using namespace std;
int main() {
  forward_list<int> f1;
  forward_list<int> f2;

  f1.assign({1,2,3,4,5}); //asign values using assign method

  f2.assign(5,10); //assign 5 elements with value 10

  cout<<"f1 elements are ";
  for(auto it:f1)
  {
    cout<<it<<endl;
  }
  for(auto it:f2)
  {
    cout<<it<<endl;
  }

  return 0;
}
