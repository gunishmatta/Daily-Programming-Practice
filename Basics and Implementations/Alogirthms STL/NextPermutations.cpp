#include<iostream>
#include<algorithm>
using namespace std;

int main() {
  int a[] ={1,2,3};

int n = sizeof(a)/sizeof(int);

next_permutation(a,a+n);

for(int i =0;i<n;i++)
{
  std::cout <<a[i]<< '\n';
}

next_permutation(a,a+n);
for(int i =0;i<n;i++)
{
  std::cout <<a[i]<< '\n';
}

  return 0;
}
