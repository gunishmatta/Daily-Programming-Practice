class Solution {
public:
    int findDuplicate(vector<int>& nums) {
 int nums_size = nums.size();
       vector<bool> count(nums_size);
       
        for(auto i:nums)
        {
         if(count[i])
         { return i;
         }
          count[i]=true;
            
        }
        
        return -1;
        
    }
};
