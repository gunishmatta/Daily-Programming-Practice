#include<iostream>
#include<climits>
using namespace std;

int main() {
int a[10] ={-120,1,20,3003,222,111};
  int largest = INT_MIN;
  int smallest = INT_MAX;

for (int i = 0; i<6; i++) {
if (a[i]>largest) {
  /* code */                    //largest = max(largest,a[i]);
  largest = a[i];
}
if (a[i]<smallest) {
  smallest = a[i];            //smallest = min(smallest,a[i]);
}

}



std::cout << "smallest "<<smallest<<'\n';
std::cout << "largest "<<largest<<'\n';

  return 0;
}
