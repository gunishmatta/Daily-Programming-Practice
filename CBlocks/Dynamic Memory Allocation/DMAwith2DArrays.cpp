#include<iostream>
using namespace std;
int main() {
//2d array using Dynamic Memory allocation
int **arr;
int r,c;
cin>>r>>c;
arr = new int* [r]{0}; //allocating rows

for (int i = 0; i<r; i++) {
arr[i] = new int[c]{0}; //allocating colums
}

int value = 1;
for (int i = 0; i < r; i++) {
for (int j = 0; j < c; j++) {
arr[i][j] = value;

std::cout <<arr[i][j]<< '\n';
value++;
}
}

  delete [] arr;
  return 0;
}
