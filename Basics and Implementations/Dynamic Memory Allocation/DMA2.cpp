#include<iostream>
using namespace std;
int main() {
//arrays using concept of dynamic memory allocation
int n;
cin>>n;
int *a = new int[n]{0}; //initialise all the elements of the array with zero

std::cout <<sizeof(a)<< '\n';

for (int i = 0; i < n; i++) {
cin>>a[i];
std::cout <<a[i]<< '\n';
}

delete [] a; //deallocation of the memory


  return 0;
}
