#include<iostream>
#include<algorithm>
using namespace std;
int main() {
  int a[] = {2,3,4,5,6,7,7,7,8,8};
  int n = sizeof(a)/sizeof(int);
int key;
std::cout << "Enter element to be searched for" << '\n';
cin>>key;

bool present = binary_search(a,a+n,key);
if(present)
{
  std::cout << "Element is present" << '\n';
}
else
std::cout << "Element is not present" << '\n';

auto lb =  lower_bound(a,a+n,key);
std::cout <<lb-a<< '\n';
auto ub = upper_bound(a,a+n,key);
std::cout <<ub-a<< '\n';

std::cout << "Order of occurance "<<ub-lb<< '\n';
  return 0;
}
