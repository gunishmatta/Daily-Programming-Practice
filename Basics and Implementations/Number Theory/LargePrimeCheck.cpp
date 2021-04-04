#include<bitset>
#include<vector>
#include<iostream>
using namespace std;
typedef long long ll;
const int n =100000;
bitset<100005> b;
std::vector<int> primes;
void find_seive()
{
  b.set(); //sets all bits to 1
  b[0]=b[1]=0;

for (long long int i=2;i<=n;i++) {
if (b[i]) {
primes.push_back(i);
for (long long int j = i*i; j <=n; j=j+i) {
  /* code */
  b[j]=0;
}
}
}

}
bool IsPrime(long long No)
{
  if (No<=n) {
  return b[No]==1?true:false;
  }
  for (long long i = 0;primes[i]*(long long)primes[i]<=No; i++) {
    if (No%primes[i]==0) {
    return false;
    }
  }
  return true;
}
int main() {
  find_seive();
  // if((checkPrime(2020111))
  // {
  //   cout<<"it is prime";
  // }
  // else
  // std::cout << "Its not" << '\n';
  // return 0;
}
