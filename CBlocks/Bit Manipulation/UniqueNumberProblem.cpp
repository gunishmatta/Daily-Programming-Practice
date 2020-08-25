//To find the unique number without using extra memory
#include<iostream>
using namespace std;
int main() {
int ans =0;
  int n;
  int no;
  cin>>n;
  for (int i = 0; i < n; i++) {
  cin>>no;
ans = ans^no;
  }
  cout<<ans;
  return 0;
}
