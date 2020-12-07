#include<iostream>
using namespace std;

int main() {

int a[1000];
std::cout <<sizeof(a)<< '\n';
  int *ptr = new int [1000]; //Dynamic memory allocation ptr stores the address of the array
  std::cout <<sizeof(ptr)<< '\n';

delete [] ptr; //Memory deallocation


ptr = new int [500];
std::cout <<sizeof(ptr)<< '\n';


  return 0;
}
