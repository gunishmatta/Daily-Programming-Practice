#include<iostream>
using namespace std;
void spiralprint(int a[100][100],int m, int n)
{
  int startRow=0;
  int endRow = m-1;
  int startCol = 0;
  int endCol = n-1;

while (startRow<=endRow&&startCol<=endCol) {
for (int i = 0; i < m; i++) {
std::cout <<a[i][startCol]<<" ";
}
startCol++;

for (int j = 0; j < n; j++) {
std::cout <<a[startCol][j]<<" ";
}
startRow++;

for (int k = startRow; k < endCol; k++) {
  std::cout <<a[k][endCol]<<" ";
}
endCol--;

for (int k = endCol; k <=startCol ; k++) {
std::cout <<a[startCol][k]<< '\n';

}
startCol++;

}

}

int main() {
int a[100][100];
int m,n;
cin>>m>>n;

  for (int i = 0; i < m; i++) {
  for (int j = 0; j < n; j++) {
cin>>a[i][j];
  }
  }

  spiralprint(a,m,n);


return 0;
}
