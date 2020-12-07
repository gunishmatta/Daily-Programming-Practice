#include<iostream>

using namespace std;

void display(char s[])
{
  cout<<"entered string is "<<s<<endl;
}

void display(string s1)
{
  std::cout << "Entered string is " <<s1<< '\n';
}

int main() {
  string str;
  char st[10];
  std::cout << "Enter string 2 " << '\n';
    getline(cin,str);


std::cout << "Enter a string" << '\n';
cin.get(st,20);


display(st);
display(str);

  return 0;
}
