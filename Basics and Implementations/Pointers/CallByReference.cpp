#include<iostream>
using namespace std;
void increment(int *a)
{
  *a=*a+1;
  std::cout << "Inside function a = "<<*a << '\n';

}

int main() {
  int a =10;
  increment(&a);
  std::cout << "Inside main a = "<<a<< '\n';
  return 0;
}
