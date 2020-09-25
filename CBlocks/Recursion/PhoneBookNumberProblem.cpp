#include<iostream>
using namespace std;
char keypad[][10]={"","","ABC","DEF","GHI","JKL","MNO","PQRS","TUV","WXYZ"};
void generate_number(char *input, char *output,int i,int j)
{
if (input[i]=='\0') {
  output[j]=='\0';
  cout<<output<<" ";
return;
}
int digit = input[i]-'0';
if (input[i]==1||input[i]==0) {
  generate_number(input,output,i+1,j);
}

for (int i = 0;  keypad[digit][i]!='\0'; i++) {
output[j] = keypad[digit][i];
generate_number(input,output,i+1,j+1);
}
return;
}
int main() {
  char inp[100];
  cin>>inp;
char out[100];
  generate_number(inp,out,0,0);

  return 0;
}
