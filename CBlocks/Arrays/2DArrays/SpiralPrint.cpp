#include<iostream>
using namespace std;

void spriralprint(int a[][3], int m,int n)
{
  int startRow = 0;
  int startCol = 0;
  int endRow = m-1;
  int endCol = n-1;

while (startRow<=endRow&&startCol<=endCol) {
for (int i = startCol; i <=endCol; i++) {
  std::cout <<a[startRow][i]<<" ";
}
startRow++;
for (int i = startRow; i <=endRow; i++) {
  std::cout <<a[i][endCol]<<" ";
}
endCol--;
if (endRow>startRow) {   //corner cases
  for (int i = endCol; i >= startCol; i--) {
    std::cout << a[endCol][i]<<" ";
  }
  endRow--;
}
if (endCol>startCol) { //corner case
  for (int i = endRow; i >=startRow; i--) {
    std::cout <<a[i][startCol]<<" ";
  }
  startCol++;
  }
}




}
int main() {

int a[3][3] = {0};
int value = 1;
for (int row = 0; row < 3; row++) {
for (int column = 0; column < 3; column++) {
a[row][column] = value;
std::cout <<a[row][column]<< '\t';

value++;
}
std::cout<< '\n';
}
std::cout<<'\n';
spriralprint(a,5,3);

  return 0;
}
