#include<iostream>

using namespace std;

struct Person
{
  char name[50];
  int age;
  float salary;
};


int main() {
Person p1;

std::cout << "Enter Name " << '\n';
cin.get(p1.name,50);
std::cout << "Enter age" << '\n';
  cin>>p1.age;
  std::cout << "Enter salary" << '\n';
cin>>p1.salary;

std::cout <<p1.name<<p1.age<<p1.salary<< '\n';
  return 0;
}
