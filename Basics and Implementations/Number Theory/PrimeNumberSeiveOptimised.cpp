#include<iostream>
using namespace std;

void find_seive(int *p,int n)
{
    for (int i = 3; i < n; i+=2) {
    p[i]=1; //set all odds to 1 to suppose as primes
    }

for (int j = 3; j <n ; j++) {
if (p[j]==1) {

for (int k = j*j; k <n;k=k+j) {
p[k]=0; //set 0 for multiples of k
      }

    }

  }
p[2]=1; //corner cases
p[1]=p[0]=0;
}



int main() {
  int n;
  cin>>n;
  int primes[1000] ={0};
  find_seive(primes,n);
  for (int i = 0; i < n; i++) {
  if (primes[i]==1) { //check if prime[i] is one then i is prime number
  std::cout <<i<< '\n';
  }

  }
  return 0;
}
