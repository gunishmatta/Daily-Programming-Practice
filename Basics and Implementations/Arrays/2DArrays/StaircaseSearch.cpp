#include<iostream>
using namespace std;
//find an element in row or column sorted array
int staicaseSearch(int a[4][4],int n,int key)
{
  int largest = a[n-1][n-1];
  int smallest = a[0][0];
  if (n==0) {
    return -1; //if number of elements are 0
  }
  if (key<smallest||key>largest) {
  return -1;
  }
int row = 0;
int col = n-1;

  while (row<n&&col>=0) {
if (a[row][col]==key) {
std::cout << "Element found at "<<row<<","<<col<< '\n';
return 1;
}
if (a[row][col]>key) {
col--;
}
else
row++;
  }
  return 0;
  std::cout << "Element not found " << '\n';
}

int main() {
  int key;
int a[4][4]={0};

int n=4,value =1;
for (int i = 0; i < n; i++) {
for (int j = 0; j < n; j++) {
a[i][j] += value;
value++;
std::cout <<a[i][j]<<" ";
}
 cout<<'\n';
}
std::cout << "ENter Item to be searched for " << '\n';
cin>>key;
staicaseSearch(a,4,key);


  return 0;
}
