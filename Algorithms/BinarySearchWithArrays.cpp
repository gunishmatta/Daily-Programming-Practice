#include<iostream>

using namespace std;

int binary_search(int a[],int n,int key)
{
  int start = 0;
int  end = n-1;
  while (start<=end) {
    /* code */
    int mid = (start+end)/2;
        if(a[mid]==key)
        {
          return mid;
          std::cout << "Element found at "<<mid<<"index"<< '\n';
        }
        else if (a[mid]>key) {
          end = mid -1;
        }
        else
start = mid+1;
  }

  return -1;
}

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
std::cout <<binary_search(a,n, key) << '\n';

}
