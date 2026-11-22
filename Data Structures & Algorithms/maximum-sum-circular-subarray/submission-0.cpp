class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int maxbest=nums[0];
        int maxans=nums[0];
        int minbest =nums[0];
        int minans =nums[0];
        int sum=nums[0];
        for(int i=1; i<nums.size() ;i++)
        {
            sum=sum+nums[i];
            maxbest =max(maxbest+nums[i] ,nums[i]);
            maxans=max(maxans,maxbest);

            minbest =min(minbest+nums[i] ,nums[i]);
            minans=min(minans , minbest);


        }
        if(maxans<0)
        {
            return maxans;
        }
        return max(maxans, sum-minans);
    }
};