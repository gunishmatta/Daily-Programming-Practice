#include<iostream>
using namespace std;
int findpower(int n,int p)
{
  if (p==1||p==0) {
  return n;
  }

  return n*findpower(n,p-1);
}

int main() {
  int n;
  cin>>n;
  int p;
  cin>>p;
  std::cout <<findpower(n,p)<< '\n';
  return 0;
}
