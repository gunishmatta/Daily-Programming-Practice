#include<iostream>
using namespace std;
int isOdd(int n)
{
  return(n&1);
}

int main() {
  int n;
  cin>>n;
  if(isOdd(n))
  {
    std::cout << "It is odd" << '\n';
  }
  else
  {
    std::cout << "It is even" << '\n';
  }
  return 0;
}
