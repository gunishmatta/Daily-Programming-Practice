#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
stack<int> s;
s.push(2);
s.push(1);
s.push(3);

std::cout << s.top() << '\n';
s.pop();
std::cout << s.top() << '\n';
std::cout << s.size() << '\n';
std::cout << s.empty() << '\n';
stack<int> s2;

s2.push(10);
s2.push(20);
s2.push(30);

s.swap(s2);


return 0;
}
