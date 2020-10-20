#include<iostream>
#include<cstring>
using namespace std;
int findCount(string s)
{
  int n = s.length();
  int count =0;
  int currentCount =1;
  for (int i = 0; i < n; i++) {
  if(i<n && s[i]==s[i+1])
  {
    currentCount++;
  }
  else
  {
    if(currentCount>count)
    {
      count = currentCount;
    }
    currentCount =1;
  }

  }
  return count;
}
int main() {
  string s;
  cin>>s;
  int count = findCount(s);
  cout<<count;
  return 0;
}
