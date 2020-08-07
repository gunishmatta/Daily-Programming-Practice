#include<iostream>
#include<string>
#include<iterator>
#include<bits/stdc++.h>
using namespace std;

int main() {
  string s1 = "Gunish Matta";
  string s2("I am Gunish Matta");

string::iterator it;

//using iterator
for ( it = s1.begin(); it!=s1.end(); it++) {
std::cout <<(*it)<< '\n';
}

return 0;
}
