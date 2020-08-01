#include<iostream>
using namespace std;

struct Distance
{
  int feet;
  float inch;
};

int main() {

Distance *ptr,d;
ptr = &d;
std::cout << "Enter feet : " << '\n';
cin>>(*ptr).feet;
std::cout << "Enter Inches : " << '\n';
cin>>(*ptr).inch;

std::cout << "Distance = " << '\n';
std::cout <<(*ptr).feet<<"Feet"<< '\n';
std::cout <<(*ptr).inch<<"Inches"<<'\n';
  return 0;
}
