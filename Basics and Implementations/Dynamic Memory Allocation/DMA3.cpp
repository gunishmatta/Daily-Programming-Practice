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
//never return a local variable
return a; //returning a dynamic array
}

int main() {
  int *b = func(); //copying b to a

  std::cout <<b[0]<< '\n';
  std::cout <<b<< '\n';
// it will clear the array a
delete [] b;

  return 0;
}
