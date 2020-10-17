#include<iostream>
using namespace std;
int findLongest(string s)
{
  int len = s.length();
  int count =0;
  char res = s[0];
  int ccount=1;
  for (int i = 0; i < len; i++) {
    if (i < len-1 && s[i] == s[i+1])
               ccount++;

  else
  {
    if(ccount>count)
    {
      count = ccount;
      res = s[i];
    }
    ccount =1;
  }
  }
  return res;
}
int main() {
string s;
cin>>s;
cout<<findLongest(s);
  return 0;
}
