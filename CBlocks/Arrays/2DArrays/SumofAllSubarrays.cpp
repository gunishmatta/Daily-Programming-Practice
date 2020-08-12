#include<iostream>
using namespace std;

int sumofsubarrays (int a[100][100],int m, int n)
{int sum =0;
  for (int i = 0; i < m; i++)
  {
  for (int j = 0; j < n; j++) {
  int topleft = (i+1)*(j+1);
  int bottomright = (m-i)*(n-j);
  sum += (a[i][j]*topleft*bottomright);
  }

  }
  return sum;
}
int main() {
  int arr[100][100];
  int m,n;
  std::cout << "Enter number of rows" << '\n';
  cin>>m;
  std::cout << "Enter number of colums " << '\n';
  cin>>n;

  for (int i = 0;i<m;i++) {
    for (int j = 0; j <n; j++) {
  cin>>arr[i][j];
    }
  }
std::cout << "MAX SUm of  sumofsubarrays"<<sumofsubarrays(arr,m,n)<< '\n';

  return 0;
}
