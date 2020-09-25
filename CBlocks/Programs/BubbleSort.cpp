#include<stdio>

void sort(int a[],int n)
{int temp=0;
  for(int i=1;i<=n-1;i++)
  {
    for(int j =0;j<=(n-i)-1;j++)
    {
      if(a[j]>a[j+1])
      {
        temp = a[j];
        a[j] = a[j+1];
        a[j+1] = temp;
      }
    }
  }
}

int main()
{
  int a[] ={10,9,8,6,5,4,3,2,1};
  sort(a,10);
  for(int i=0;i<n;i++)
  {
    printf("%d",a[i]);
  }
return 0;
}
