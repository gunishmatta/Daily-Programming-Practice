#include<iostream>
using namespace std;
int exponent(int a,int n)
{
    int ans =1;

while (n>0) {
  /* code */
  int last_bit = (n&1); //to pick the last bit of n

  if ((last_bit)!=0) {

  ans = ans * a;
}
  a = a*a; //squaring
  n = n>>1; //to dicard the last bit of n
}
  return ans;
}
int main() {
  int a;
  int n;
  cin>>a>>n;
std::cout <<exponent(a,n)<< '\n';
  return 0;
}
