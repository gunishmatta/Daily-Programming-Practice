#include<iostream>
using namespace std;
int main() {

int a[3][3]={{0,1,2},{2,3,4},{4,5,6}};
int n = 3;

for (int column = 0; column < 3; column++) {

if (column%2==0) {
  for (int row = 0; row < 3; row++) {
std::cout <<a[row][column]<<" ";
  }
}
  else
  {
  for (int row = 2; row >= 0; row--) {
    std::cout <<a[row][column];
  }
}

std::cout<< '\n';
}
}
  return 0;
}
