#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {

pair<int,int> p;
p.first = 10;
p.second = 20;
std::cout <<p.first<< '\n';
std::cout <<p.second<< '\n';
pair<int,int> p2(p);
std::cout <<p2.first<< '\n';


pair <pair<int,int>,string> p3;
p3.first.first = 1000;
p3.first.second = 2000;
p3.second = "Gunish Matta";

std::cout <<p3.first.first<< '\n';
std::cout <<p3.first.second<< '\n';
std::cout <<p3.second<< '\n';

  return 0;
}
