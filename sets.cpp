// The following code creates a set that consists of integers, and shows some
// of the operations. The function insert adds an element to the set, the function
// count returns the number of occurrences of an element, and the function erase
// removes an element from the set
#include<bits/stdc++.h>

using namespace std;
#define st set<int>
#define mst multiset<int>
#define prset(i,s2) for(auto i:s2){cout<<"\n"<<i<<endl;}
int main()

{
st s;
s.insert(3);
s.insert(55);
s.insert(-1);

cout<<s.count(-1)<<endl;   //1 means that the item is present is set
cout<<s.count(32)<<endl;

s.insert(5);  // s will be inserted only once.
s.insert(5);
s.insert(5);

//Set always places the elements in ascending order i.e. sorted automatically
cout<<s.size()<<endl;
for(auto x:s)                  //Iterating through a set
{
    cout<<x<<endl;
}

mst s2; //multiset(all elements would be inserted and not distinct)
s2.insert(10);
s2.insert(10);
s2.insert(-1);
s2.insert(5);

prset(i,s2);

s2.erase(10); //removes all 10 in a set
s.erase(s.find(5)); //removes only one instance of 5
prset(i,s2);

return 0;

}