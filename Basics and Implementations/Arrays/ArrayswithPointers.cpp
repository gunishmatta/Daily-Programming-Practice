#include<iostream>

using namespace std;

int main() {
  float arr[10] ={0,1,2,3,4,5,6,7,8,9};
  float *ptr;

for (int i = 0; i < 10; i++) {
std::cout << "Address of "<<arr[i]<<" : "<<&arr[i]<< '\n';

}
ptr = arr;
for (int j = 0; j < 10; j++) {
std::cout << "Address of "<<arr[j]<<" : "<<ptr+j<< '\n';

}


  return 0;
}
