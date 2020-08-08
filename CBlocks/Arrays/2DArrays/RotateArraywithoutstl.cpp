#include<iostream>
#include <bits/stdc++.h>
#include<algorithm>
using namespace std;

void rotate(int a[][4], int n)
{
  int startCol =0;
  int endCol = n-1;
  for (int row = 0; row < n; row++) {
    while (startCol<endCol) {
    swap(a[row][startCol]),a[row][endCol]);
startCol++;
endCol--;
    }
//Transpose of matrix
for (int i = 0; i < n; i++) {
  for (int j = 0; j <n; j++) {
if (i<j) {
swap(a[i][j],a[j][i]);
}

}
}


  }


}

void display(int a[][4],int n)
{
  for (int i = 0; i < 4; i++) {

for (int j = 0; j < 4; j++) {
  /* code */
std::cout <<a[i][j]<< '\n';
}
std::cout<< '\n';
    /* code */
  }
}

int main() {
  int a[4][4] = {0};
  int value = 1;
  for (int row = 0; row < 4; row++) {
  for (int column = 0; column < 4; column++) {
  a[row][column] = value;
  std::cout <<a[row][column]<< '\t';

  value++;
  }


  std::cout<< '\n';
  }

rotate(a,4);

display(a,4);

  return 0;
}
