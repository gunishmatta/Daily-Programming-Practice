#include<iostream>
using namespace std;
void transferdisk(int n,char source,char helper,char endr)
{
  if (n==1) {
  std::cout << "Move Rods from" <<source<<" to "<<endr<<'\n';
return;
  }

transferdisk(n-1,source,helper,endr);
std::cout << "Move disk"<<n<<"from"<<source<<" to "<<endr<<'\n';
transferdisk(n-1,helper,endr,source);

}

int main() {
int n;
cin>>n;
transferdisk(n,'A','B','C');
  return 0;
}
