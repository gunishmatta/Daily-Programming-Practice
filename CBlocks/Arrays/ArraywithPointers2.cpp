#include<iostream>
using namespace std;

int main() {

float a[4];

for (int i = 0; i < sizeof(a); i++) {

  cin>>*(a+i);
}


for (int j = 0; j < sizeof(a); j++) {
std::cout << "Address of "<<a+j<<*(a+j)<<'\n';

}

  return 0;
}
