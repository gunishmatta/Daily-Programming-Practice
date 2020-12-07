#include<iostream>
using namespace std;
int clear_itoj_bits(int n,int i,int j)
{
  int first_mask = (~0)<<(j+1);
  int second_mask = (1<<i)-1; //or we can use 2^n -1
  int final_mask = first_mask|second_mask;
return n&final_mask;
}
int replacebits(int n,int m,int i,int j)
{
 int cleared =  clear_itoj_bits(n,i,j);
  return cleared|(m<<i);
}
int main() {
  int m;
  int n;

  cin>>n;
  cin>>m;
  int i;
  int j;
  cin>>i>>j;
  cout<<replacebits(n,m,i,j);
  return 0;
}
