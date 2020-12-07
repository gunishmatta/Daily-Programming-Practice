#include<iostream>
#include<forward_list>
using namespace std;
int main() {
  // Initializing forward list
      forward_list<int> flist = {10, 20, 30} ;

      // Declaring a forward list iterator
//      forward_list<int>::iterator ptr;

      // Inserting value using insert_after()
      // starts insertion from second position
  auto  ptr =  flist.insert_after(flist.begin(), {1, 2, 3});

      // Displaying the forward list
      cout << "The forward list after insert_after operation : ";
      for (auto c : flist)
      {cout << c << " ";
        }
      cout << endl;
  return 0;
}
