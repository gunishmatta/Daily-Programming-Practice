#include<iostream>
using namespace std;

int main() {
char ch[100] ="Hello";
char ch2[100] = {'w','o','r','l','d','\0'};
char ch3[100];

std::cout <<ch<< '\n';
std::cout <<ch2<< '\n';
std::cout << "Enter a string " << '\n';
cin>>ch3;

std::cout << "String entered is " << '\n';
std::cout <<ch3<< '\n';


  return 0;



}
