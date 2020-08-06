//Program to remove continious duplicates
#include<iostream>
#include <cstring>
using namespace std;

void removeduplicates(char ch[])
{
  int len = strlen(ch);
  if (len==1||len==0) {
    return;
  }
  int prev =0;
  for (int current = 1; current < len; current++) {
    if (ch[prev]!=ch[current]) {
      prev++;
      ch[prev]= ch[current];
    }
  }
  ch[prev+1] = '\0';
  return ;
}


int main() {
  char ch[100]= "ggunniissssh";
  removeduplicates(ch);
  std::cout << ch << '\n';

  return 0;
}
