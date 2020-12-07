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

void inc(int n)
{
if(n==0)
{
  return;
}
  inc(n-1); //it will do top to bottom approach
  std::cout <<n<< '\n';
}

int main(int argc, char const *argv[]) {
int n;
cin>>n;
decrease(n);
int limit;
cin>>limit;
increase(n,limit);
inc(n);
  return 0;
}
