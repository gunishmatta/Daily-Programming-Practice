#include<iostream>
#include<cstring>
using namespace std;
int main() {
  char str[100] = "Hi, I am Gunish ";
  char *ptr = strtok(str," "); //to print first token
    std::cout <<ptr<< '\n';

while (ptr!=NULL) {
  ptr = strtok(NULL, " "); //to print subsequent tokens
  std::cout <<ptr << '\n';
}

  return 0;
}
