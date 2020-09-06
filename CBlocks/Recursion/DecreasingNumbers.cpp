#include<iostream>
using namespace std;
void decrease(int n)
{

  if(n>=1)
  {
    std::cout <<n<<" ";
decrease(n-1);
  }

}
void increase(int n,int limit)
{

  if(n<=limit)
  {
    std::cout <<n<<"  ";
increase(n+1,limit);
  }

}
int main(int argc, char const *argv[]) {
int n;
cin>>n;
decrease(n);
int limit;
cin>>limit;
increase(n,limit);
  return 0;
}
