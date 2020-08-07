#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

int main() {
  string s1 = "Gunish Matta";
  string s2("I am Gunish Matta");

string s3(s2);

char s4[20] ={'g','u','n','u','\0'};
string s5(s4);

std::cout <<s1<< '\n';
std::cout <<s2<< '\n';
std::cout <<s3<< '\n';
std::cout <<s4<< '\n';
std::cout <<s5<< '\n';

//finding an index
string word = "Gunish";
int idx = s2.find(word);
std::cout <<idx<< '\n';

//remove a specific word from a string using index
int len = word.length();
std::cout <<s2<< '\n';
s2.erase(idx,len+1); //len+1 to remove one extra whitespace
std::cout <<s2<< '\n';

string s0;
if (s0.empty()){
std::cout << "string is empty"<< '\n';
}

s0.append("Hey Mate!");
std::cout <<s0<< '\n';

s0 +="I am from India ";

std::cout <<s0<< '\n';
string s22 = "Apples";
string s33 = "Mangoes";

cout<<s22.compare(s33);

//Iterating over a string
for (int i = 0; i <s0.length(); i++) {
  std::cout <<s0[i];
}

//using iterator
for (auto it = s0.begin(); it!=s0.end(); it++) {
std::cout <<(*it)<< '\n';
}

  return 0;
}
