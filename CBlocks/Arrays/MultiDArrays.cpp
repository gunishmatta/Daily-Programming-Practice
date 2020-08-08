#include <iostream>
using namespace std;

int main()
{
int a[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
int b[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
int c[3][4] ;
for (int i = 0; i < 3; i++)
{

for (int j = 0; j < 4; j++)
{

c[i][j] = a[i][j]+b[i][j];
cout<<c[i][j]<<endl;

}


}




    return 0;
}
