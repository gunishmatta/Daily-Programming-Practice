#include<iostream>
using namespace std;
int main() {
  int a = 10;
  std::cout <<"Address of a is "<<&a<< '\n';
  char ch = 'G';
  std::cout << "Address of char ch is "<<&ch<< '\n'; //it not works for characters because of operator overloading
 std::cout <<(void *)&ch<< '\n'; //explicit typecasting from char now it will display the Address

int *ptr = &a;

std::cout <<ptr<< '\n';
std::cout <<*ptr<< '\n';
std::cout << "size of "<<sizeof(ptr)<< '\n';

int **newptr = &ptr; //double pointer newptr will store the Address of pointer ptr and address of a as value
std::cout <<newptr<< '\n';
std::cout <<*newptr<< '\n';

  return 0;
}
