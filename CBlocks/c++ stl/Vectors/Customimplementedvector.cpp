#include "vector.h"
#include<iostream>
using namespace std;
int main() {
  Vector v;
v.push_back(2);
v.push_back(3);
v.push_back(4);
v.push_back(5);

for (int i = 0; i < v.size(); i++) {
  std::cout <<v[i]<< '\n';
}

  return 0;
}
