#include<iostream>
#include<forward_list>
using namespace std;
int main() {
 forward_list<int> flist = {10, 20, 30, 25, 40, 40};

 flist.remove(40);

 for(auto x:flist)
 {
   cout<<x<<endl;
 }



  return 0;
}
