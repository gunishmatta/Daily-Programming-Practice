#include<iostream>
#include<algorithm>
using namespace std;
int main() {
int a[] = {1,2,3,4,5};
int n = sizeof(a)/sizeof(int);
int key;
std::cout << "Enter element to find " << '\n';
cin>>key;
auto it = find(a,a+n,key);
int index = it-a;
if (index==n) {
std::cout << "Element is not present" << '\n';
}
else
std::cout << "Element is present at"<<index<< '\n';

  return 0;
}
