#include<iostream>
#include<algorithm>
using namespace std;

int main() {
  int a[] ={1,2,3,4,5,6,7,8};
int n = sizeof(a)/sizeof(int);
rotate(a,a+2,a+4); //starting point , mid point ,end point
  for(auto x:a)
  {
    std::cout <<a[x]<< '\n';
  }
  return 0;
}
