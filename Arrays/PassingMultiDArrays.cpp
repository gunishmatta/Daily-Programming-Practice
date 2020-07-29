#include <iostream>
using namespace std;

void display(int a [][2]) {
  /* code */

for (int i = 0; i < 3; i++) {
  /* code */
  for (int j = 0; j < 2; j++) {
    cout <<a[i][j]<< '\t';
      }
}
  }

int main() {
  /* code */
int arr[3][2] ={
  {1,2},{3,4},{5,6}

};

display(arr);

  return 0;
}
