#include<iostream>

using namespace std;

int main() {

int a[100] = {0};
int n,key;
std::cout << "Enter size of array" << '\n';
cin>>n;
  for (int k =0 ; k<n; k++) {
    cin>>a[k];
  }
std::cout << "Enter element to be searched " << '\n';
cin>>key;
for (int j = 0; j<n; j++) {
  if (a[j]==key) {
    std::cout << key<<"found at "<<j+1<<"th position"<<'\n';
    break;
  }
  if (a[j]==n) {
    std::cout <<key<<" not found " << '\n';
  }

}


  return 0;
}
