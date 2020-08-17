#include<iostream>
using namespace std;
//given a sorted array find the pair of elements that sum to k
int main() {

  int a[10] ={1,3,4,6,7,8};
int key=14;
int i =0;
int j =(sizeof(a)/sizeof(int))-1;

while(i<j)
{
int  currentSum = a[i]+a[j];
  if (currentSum>key) {
    j--;
  }
  else if (currentSum<key) {
    i++;
  }
  else if (currentSum==key) {
  std::cout <<a[i]<<" and "<<a[j]<< '\n';
  i++;
  j--;
  }

}

  return 0;
}
