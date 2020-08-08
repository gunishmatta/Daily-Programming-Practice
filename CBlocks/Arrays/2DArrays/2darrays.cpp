#include<iostream>
using namespace std;

int main() {
int a[5][3];
std::cout << "Enter values of array" << '\n';
for (int row = 0; row < 5; row++) {
for (int column = 0; column < 3; column++) {
  cin>>a[row][column];
}
}

for (int row = 0; row < 5; row++) {
for (int column = 0; column < 3; column++) {
  std::cout <<a[row][column]<< '\t';
}
std::cout<< '\n';
}

int b[3][3] = {0};
int value = 1;
for (int row = 0; row < 3; row++) {
for (int column = 0; column < 3; column++) {
a[row][column] = value;
std::cout <<a[row][column]<< '\t';

value++;
}
std::cout<< '\n';
}
  return 0;
}
