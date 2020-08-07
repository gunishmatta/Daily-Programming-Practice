#include<iostream>
#include<cstring>
using namespace std;
int main() {
  char a[1000];
int n;
  int len = 0;
  int max_len = 0;
char max[1000];

std::cout << "Enter number of strings " << '\n';
cin>>n;
cin.get(); //to consume the null character in the buffer
for (int i = 0; i < n; i++) {
  cin.getline(a,1000);
len = strlen(a);
if (len>max_len) {
  max_len = len;
  strcpy(max,a);
}
}

std::cout << "largest string is "<<max<<"with "<<max_len<<" characters "<<'\n';

  return 0;
}
