//his function deletes the multiple occurrences of a number and returns a forward list with unique elements.
// This function is used to merge one forward list with other. If both the lists are sorted then the resulted list returned is also sorted.
#include<iostream>
#include<forward_list>
using namespace std;

int main()
{
forward_list<int> f1={10,19,5,5,6,6,6,6,7,6,5,3,1,-1,0};
forward_list<int> f2={3,1,-1,0};
f1.swap(f2);
cout<<"contents of f1 after swap function are ";

for(auto x:f1)
{
  cout<<x<<" ";
}


cout<<"contents of f2 after swap function are ";

for(auto x:f2)
{
  cout<<x<<" ";
}

return 0;
}
