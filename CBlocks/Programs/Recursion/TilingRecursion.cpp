#include<iostream>
using namespace std;
int tiles(int n)
{
if (n<=3) {
return 1;
}
return tiles(n-1)+tiles(n-3) ;

}
  int main() {
int n;
cin>>n;
  std::cout <<tiles(n)<< '\n';
  return 0;
}
