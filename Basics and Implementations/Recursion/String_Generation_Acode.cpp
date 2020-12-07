#include<iostream>
using namespace std;
void generate_strings(char *input, char *output,int i,int j)
{
  if (input[i]=='\0') {
output[j]=='\0';
cout<<output<<" ";
return;
  }
  int digit = input[i]-'0';
if(input[i]!=0)
{
  int ch =digit +'A'-1;
  output[j]=ch;
generate_strings(input,output,i+1,j+1);
if (input[i+1]!='\0') {
int second_digit = input[i+1]-'0';
int no = digit*10+second_digit;
if(no<=26)
{
  int ch2 = digit+'A'-1;
  generate_strings(input,output,i+2,j+2);
}
}

}
return;
}
int main() {
  char input[100];
  char output[100];
  cin>>input;
  generate_strings(input,output,0,0);
  return 0;
}
