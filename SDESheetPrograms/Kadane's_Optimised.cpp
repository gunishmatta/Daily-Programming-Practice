
int maxSubarraySum(int arr[], int n){
    
    // Your code here
    int currentMax=0;
    int max = INT_MIN;
    
    for(int i=0;i<n;i++)
    {
    
    if(arr[i]<arr[i]+currentMax)
    {
        currentMax = arr[i]+currentMax;
    }   
    else

    currentMax = arr[i];



    if(max<currentMax)
    {
        max= currentMax;
    }
    
        
    }
    
    
    return max;
    
}
