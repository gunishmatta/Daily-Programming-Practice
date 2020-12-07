#include<iostream>
using namespace std;

int first_occurance(int a[], int n,int key)
{
int start =0;
int end = n-1;
int ans=-1; //the index of first occurance
while (start<=end) {
int mid = (start+end)/2;
if (a[mid]==key) {
ans=mid;
end = mid-1;
}
if (a[mid]<key) {
start = mid+1;
}
else
if(a[mid]>key)
end = mid -1;
}
  return ans;
}

int last_occurance(int a[],int n,int key)
{
  int ans = -1;
  int start = 0;
  int end = n-1;
  while (start<=end) {
int mid = (start+end)/2;
if (a[mid]==key) {
  ans=mid;
  start = mid+1;
}

else if (a[mid]<key) { //key is greater than mid so we move right
  start = mid+1;
}
else if(a[mid]>key) //key is less than mid so we move towards left
{end = mid -1;}
  }
  return ans;
}
int main() {
  int n;
  std::cout << "Enter number of elements" << '\n';
  cin>>n;
std::cout << "Enter elements of array" << '\n';
  int a[n];
  for (int i = 0; i < n; i++) {
cin>>a[i];
  }
  int key;
  std::cout << "Enter element to be searched for first occurance" << '\n';
cin>>key;
std::cout <<key<<" first occurs at "<<first_occurance(a,n,key)<<'\n';
std::cout <<key<<" last occurs at " <<last_occurance(a,n,key)<<'\n';
  return 0;

}
