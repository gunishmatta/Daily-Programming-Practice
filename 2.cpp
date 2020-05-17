//Structures in C++
#include<iostream>
using namespace std;
typedef struct employee
{
    /* data */
int eId;
char favChar;
float salary;

} ep;

int main()
{
    enum Meal{Breakfast,lunch,dinner};
    cout<<Breakfast;
    cout<<lunch;
    cout<<dinner;

    Meal m1 = Breakfast;
    cout<<m1;
struct employee gunish;
gunish.eId=1;
gunish.favChar= 'g';
gunish.salary=10000000;

cout<<gunish.eId<<endl;

    return 0;

}
