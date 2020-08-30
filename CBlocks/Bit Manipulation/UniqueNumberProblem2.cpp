//To find the unique number without using extra memory
#include<iostream>
using namespace std;

int main() {
int result =0;
  int n;
  int no;
  cin>>n;
int a[100]; //for input constraint
for(int i =0;i<n;i++)
{
  cin>>no;
  a[i] = no;
  result = result^no;
}
int temp = result;
int pos=0;
while ((temp&1)!=1){
pos++;
temp= temp>>1;
}
//The first bit at xor is in position pos
int mask = (1<<pos);
//find those number which contain set bits at position pos
int x=0;
int y=0;
for (int j = 0; j < n; j++) {
if ((a[j]&mask)>0) {
x = x^a[j];
}
}
y = result^x;
std::cout <<min(x,y)<<endl<<max(x,y)<< '\n';
  return 0;
}
