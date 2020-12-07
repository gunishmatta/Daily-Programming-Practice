#include<iostream>
using namespace std;
void generate_brackets(char *out,int n,int index,int open,int close)
{
if (index==(2*n)) {

out[index]=='\0';
std::cout <<out<< '\n';
return;
}
if (open<n) {
out[index]='(';
generate_brackets(out,n,index+1,open+1,close);
}
if (close<open) {
out[index]=')';
generate_brackets(out,n,index+1,open,close+1);
}
  return;
}

int main() {
int n;
cin>>n;
char out[1000];
int index =0;
generate_brackets(out,n,index,0,0);

  return 0;
}
