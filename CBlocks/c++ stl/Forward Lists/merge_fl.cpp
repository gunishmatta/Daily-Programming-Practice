// This function is used to merge one forward list with other. If both the lists are sorted then the resulted list returned is also sorted.
#include<iostream>
#include<forward_list>
using namespace std;

int main()
{
forward_list<int> f1={1,2,3,4,5};
forward_list<int> f2;

//creating deep copy
f2 = f1;
cout<<"contents of f2 after deep copy are ";
for(auto x:f2)
{
  cout<<x<<" ";
}

f1.merge(f2);

cout<<"contents of f1 after merge with f2 are";

for(auto x:f1)
{
  cout<<x<<" ";
}


return 0;
}
