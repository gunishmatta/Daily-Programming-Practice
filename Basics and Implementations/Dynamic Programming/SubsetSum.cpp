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


int main()
{
    int arr[] = {1,4,2,3,6};
    int sum = 5;
    int n = sizeof(arr) / sizeof(int);

    if(subsetSum(arr, n, sum))
    {
        cout << "Subset with given sum exists" << endl;
    }
    else
    {
        cout << "Subset with given sum does not exists" << endl;
    }
}
