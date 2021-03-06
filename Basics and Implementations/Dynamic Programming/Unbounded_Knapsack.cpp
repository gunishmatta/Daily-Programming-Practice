#include<bits/stdc++.h>
using namespace std;

int UnboundedKnapsack(int wt[],int val[],int n,int capacity)
{
    int dp[capacity + 1];
    int size = sizeof(dp);
    memset(dp, 0, size);


for (int i = 0; i <=capacity; i++)
{
for (int j = 0; j <n; j++)
{

if(wt[j]<=i)
{
    dp[i] = max(val[j]+ dp[i - wt[j]],
                          dp[i]);
}
}

}

return dp[capacity];

}

int main()
{

    int wt[] = {12,20,15};
    int val[] = {40, 60, 50};
    int n = 3;
    int capacity = 45;
    cout << UnboundedKnapsack(wt, val, n, capacity);

    return 0;
}
