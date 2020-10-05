#include<iostream>
#include<forward_list>
using namespace std;
int main() {
 forward_list<int> f1 = {10, 20, 30, 25, 40, 40};
 forward_list<int> f2 = {100, 200, 300, 205, 400, 40};
//his function transfers elements from one forward list to other.

 cout<<"Before splice "<<endl;
 for(auto x:f1)
 {
   cout<<x<<" ";
 }
 cout<<endl;
 for(auto x:f2)
 {
   cout<<x<<" ";
 }

f2.splice_after(f2.begin(),f1);

cout<<"After splice"<<endl;

    // Removing according to condition. Removes
    // elements greater than 20. Removes 25,30 and 40
    for(auto x:f1)
    {
      cout<<x<<" ";
    }
    cout<<endl;
    for(auto x:f2)
    {
      cout<<x<<" ";
    }


  return 0;
}
