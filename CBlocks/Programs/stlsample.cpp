#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(string& s)
{
    string rev = s;
    reverse(rev.begin(), rev.end());
    return s == rev;
  }

int main(int argc, char const *argv[]) {
  string s = "bca";

     do {
          cout << s << ' ';
      } while(next_permutation(s.begin(), s.end()));

   cout << s;
return 0;
}
