#include<iostream>
using namespace std;

int main() {
char ch[10][10] = {{'a','b','c','d','\0'},{'e','f','g','h','\0'}};

char a[10][10] = {"abc","def","efg"};

std::cout <<ch[0]<< '\n';

std::cout <<ch[1]<< '\n';

for (int i = 0; i < 2; i++) {
for (int j = 0; j < 5; j++) {
std::cout <<ch[i][j];
}
std::cout<< '\n';
}


for (int i = 0; i < 2; i++) {
for (int j = 0; j < 3; j++) {
std::cout <<a[i][j];
}
std::cout<< '\n';
}

for (int i = 65; i < 92; i++) {
std::cout <<char(i)<< '\n'; //print ascii 
}


  return 0;
}
