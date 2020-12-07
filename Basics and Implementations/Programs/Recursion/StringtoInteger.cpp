#include<iostream>
#include<cstring>
using namespace std;

int stringtoint(char *s,int n)
{
if (n==0) {
  return 0;
}
int last_digit = s[n-1]-'0';
int small_ans = stringtoint(s,n-1);
return small_ans*10+last_digit;

}

int main() {
  char a[] ="1234";
int n = strlen(a);
std::cout <<stringtoint(a,n)<< '\n';
  return 0;
}
