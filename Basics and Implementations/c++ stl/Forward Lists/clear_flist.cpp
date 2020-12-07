// This function is used to merge one forward list with other. If both the lists are sorted then the resulted list returned is also sorted.
#include<iostream>
#include<forward_list>
using namespace std;

int main()
{
forward_list<int> f1={10,19,6,5,3,1,-1,0};

f1.clear();
cout<<"contents of f2 after clear are ";

for(auto x:f1)
{
  cout<<x<<" ";
}
f1.empty() ? cout << "Forward list is empty" : cout << "Forward list is not empty"; 

return 0;
}
