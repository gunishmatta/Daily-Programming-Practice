#include<iostream>
using namespace std;

bool subsetSum(int a[],int n,int sum)
{

    bool dp[n + 1][sum + 1];

   for (int i = 0; i <= n; i++)
        dp[i][0] = true;
 
    for (int i = 1; i <= sum; i++)
        dp[0][i] = false;
 



    for (int i = 1; i <= n;i++)
    {
        for (int j = 1; j <= sum;j++)
        {
          

            if(a[i-1]<=j)
            {
                dp[i][j] = dp[i - 1][j] or dp[i - 1][j - a[i - 1]];
            }

            else
            {
                dp[i][j] = dp[i - 1][j];
            }

        }

    }
        return dp[n][sum];

}


bool equalSumPartition(int a[],int n )
{

    int sum = 0;
    for (int i = 0; i < n;i++)
    {
        sum = sum + a[i];
    }

if(sum%2!=0)
{
    return false;
}

return subsetSum(a, n, sum / 2);

}

int main()
{
    int arr[] = {1,4,2,3,7};
    int sum = 5;
    int n = sizeof(arr) / sizeof(int);

if(equalSumPartition(arr,n))
{
    cout << "Partition exists" << endl;
}
else
{
    cout << "Partition does not exists" << endl;
}
}
