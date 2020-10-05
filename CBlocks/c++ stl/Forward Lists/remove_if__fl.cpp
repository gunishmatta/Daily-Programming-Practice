#include<iostream>
#include<forward_list>
using namespace std;
int main() {
 forward_list<int> flist = {10, 20, 30, 25, 40, 40};

 cout<<"Before remove if"<<endl;
  for(auto x:flist)
  {
    cout<<x<<endl;
  }

cout<<"After remove if"<<endl;

    // Removing according to condition. Removes
    // elements greater than 20. Removes 25,30 and 40 
 flist.remove_if([](int x){return x>20;});

 for(auto x:flist)
 {
   cout<<x<<endl;
 }



  return 0;
}
