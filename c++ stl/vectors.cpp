#include<bits/stdc++.h>
using namespace std;
int main() {
  vector<int> v;
std::vector<int> v1(6,20); //initialise value of 6 elements as 20
std::vector<int> v2(v1); // initialise the same values as of vector v1

v.push_back(2);
v.push_back(30);
cout<<v[0]<<endl<<v1[6]<<endl;
std::cout <<v2[3]<< '\n';

vector<int>::iterator it = v.begin();

std::cout << "Inital value that iterator is pointing is at "<<*(it)<<'\n';

std::cout << "Last element of vector is "<<v1.back()<< '\n';

it++;
std::cout << "Value after increment of it   "<<*(it)<<'\n';
// vector<int>::iterator it = v.end(); //points to element after end i.e null
// vector<int>::iterator it = v.rend(); //points to element before starting i.e. null
// vector<int>::iterator it = v.rbegin(); //points to last element
// vector<int>::iterator it = v.cbegin(); //if you do not want any increment or decrement to the iterator






  return 0;
}
