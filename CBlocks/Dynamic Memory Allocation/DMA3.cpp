#include<iostream>
using namespace std;

int* func()
{
  int n;
  cin>>n;
int *a = new int[n];
for (int i = 0; i < n; i++) {
cin>>a[i];
}
  std::cout <<a[0]<< '\n';
  std::cout <<a<< '\n';

return a;
}

int main() {
  int *b = func();
  std::cout <<b[0]<< '\n';
  std::cout <<b<< '\n';

delete [] b;

  return 0;
}
