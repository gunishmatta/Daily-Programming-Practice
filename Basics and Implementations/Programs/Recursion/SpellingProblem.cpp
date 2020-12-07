#include<iostream>
using namespace std;
void print_spellings(int n)
{
  string a[] ={"zero","one","two","three","four","five","six","seven","eight","nine","ten"};
  if (n==0) {
    /* code */
    return;
  }
print_spellings(n/10);
int digit = n%10;
std::cout <<a[digit]<<" ";
return;

}
int main() {
  int n;
  cin>>n;
   print_spellings(n);
  return 0;
}
