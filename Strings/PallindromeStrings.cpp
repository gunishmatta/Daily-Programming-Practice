#include<iostream>
#include<cstring>
using namespace std;

bool isPalindrome(char ch[])
{
int i =0;
int j= strlen(ch)-1;
while (i<j) {
if (ch[i]==ch[j]) {
  i++;
  j--;
}
else
return false;
}
  return true;
}

int main() {
  char ch[10] ="1221";
if(isPalindrome(ch))
{
  std::cout << "It is a Pallindrome" << '\n';
}
else
std::cout << "It is not a Pallindrome" << '\n';

  return 0;
}
