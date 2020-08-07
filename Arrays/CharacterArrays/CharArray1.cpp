#include<iostream>
using namespace std;

void readline(char ch[], int max)
{
int i =0;
char ch = cin.get();
while (ch!='\0') {
  a[i]==ch;
  i++;
  if (i==max-1) {
    break;
  }
  ch = cin.get();

}
a[i]='\0';
return;
}

int main() {
char ch[100] ="Hello";
char ch2[100] = {'w','o','r','l','d','\0'};
char ch3[100];
char sentence[1000];
std::cout <<ch<< '\n';
std::cout <<ch2<< '\n';
// std::cout << "Enter a string " << '\n';

// cin>>ch3;
//
// std::cout << "String entered is " << '\n';
// std::cout <<ch3<< '\n';


std::cout << "Enter a Sentence or Paragraph " << '\n';
cin.getline(sentence,100);
std::cout << "The sentence entered is " << '\n';
std::cout <<sentence<< '\n';
return 0;

}
