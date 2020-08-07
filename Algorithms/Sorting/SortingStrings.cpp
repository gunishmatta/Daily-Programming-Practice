#include <iostream>
#include<algorithm>
#include<string>
#include<bits/stdc++.h>
using namespace std;

bool compare(string a, string b)
{
if (a.length()==b.length()) {
return a<b;
}
return a.length()<b.length();

}
int main() {

int n;
std::cout << "Enter number of strings " << '\n';
cin>>n;
cin.get(); // for consuming null pointer
string s[100];
for (int i = 0; i <n; i++) {
getline(cin,s[i]);
}
sort(s,s+n); //lexographical comparison



for (int i = 0; i < n; i++) {
  std::cout <<s[i]<< '\n';
}

sort(s,s+n,compare); //compare by string lengths
for (int i = 0; i < n; i++) {
  std::cout <<s[i]<< '\n';
}

  return 0;
}
