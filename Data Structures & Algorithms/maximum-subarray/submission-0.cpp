class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currentsum=0;
        int maxsum=-999;
        for(int i=0 ; i< nums.size(); i++)
        {
            
                currentsum=max(currentsum+nums[i],nums[i]);
                maxsum=max(maxsum,currentsum);
            
        }
        return maxsum;
    }
};
