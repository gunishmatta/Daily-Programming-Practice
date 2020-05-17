#include<iostream>
using namespace std;

int main()
{

int marks[] = {20,30,45,60};
for (int i = 0; i < 4; i++)
{
cout<<marks[i]<<endl;

}

int* p = marks;

cout<<"Value of pointer p is "<<*p<<endl;
cout<<"Value of pointer p is "<<*(p+1)<<endl;
cout<<"Value of pointer p is "<<*(p+2)<<endl;
cout<<"Value of pointer p is "<<*(p+3)<<endl;

for (int i = 0; i < 4; i++)
{
cout<<&marks[i]<<endl;
}




return 0;



}