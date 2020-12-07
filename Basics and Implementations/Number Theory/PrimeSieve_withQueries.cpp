#include<iostream>
using namespace std;
typedef long long ll;
void find_seive(int *p)

{
  for (ll i = 3; i <100000; i+=2) {
p[i]=1;
  }

for (ll j = 3; j < 100000; j++) {
if (p[j]==1) {
for (ll k=j*j; k < 100000; k=k+j) {
p[k]=0;
}
}
}
p[2]=1;
p[1]=p[0]=0;

}
int main() {
int p[100000]={0};
find_seive(p);
int csum[100000]={0};
for (ll i = 0; i <= 100000; i++) {
csum[i]=csum[i-1]+p[i];
}

int  q;
cin>>q;
while (q--) {
int a;
int b;
cin>>a>>b;
cout<<csum[b]-csum[a-1]<<endl;

}


  return 0;
}
