// This function is used to merge one forward list with other. If both the lists are sorted then the resulted list returned is also sorted.
#include<iostream>
#include<forward_list>
using namespace std;

int main()
{
forward_list<int> f1={10,19,6,5,3,1,-1,0};

f1.sort();

cout<<"contents of f2 after sorting are ";

for(auto x:f1)
{
  cout<<x<<" ";
}


return 0;
}
