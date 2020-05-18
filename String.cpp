// The string structure is also a dynamic array that can be used almost like
// a vector. In addition, there is special syntax for strings that is not available in
// other data structures. Strings can be combined using the + symbol. The function
// substr(k, x) returns the substring that begins at position k and has length x, and
// the function find(t) finds the position of the first occurrence of a substring t.
#include<bits/stdc++.h>

using namespace std;

int main()

{

string a ="Hi Gunish";
string  b = "Mr. Matta ";

cout<<a+b<<endl;
string c = a.substr(3,6);

cout<<c<<endl;

return 0;

}