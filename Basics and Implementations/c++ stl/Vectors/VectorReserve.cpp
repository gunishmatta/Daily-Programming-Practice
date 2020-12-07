#include<iostream>
#include<vector>
using namespace std;
int main() {
  std::vector<int> v;
v.reserve(100);

std::cout <<v.capacity()<< '\n';
  return 0;
}
