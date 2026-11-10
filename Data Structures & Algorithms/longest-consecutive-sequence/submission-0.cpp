class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        if(nums.empty())
            return 0;

        sort(nums.begin(), nums.end());

        int left = 0;
        int right = 1;

        int count = 1;
        int maxi = 1;

        while(right < nums.size())
        {
            if(nums[right] == nums[left])
            {
                right++;
                continue;
            }

            if(nums[right] == nums[left] + 1)
            {
                count++;
            }
            else
            {
                count = 1;
            }

            left = right;

            maxi = max(maxi, count);

            right++;
        }

        return maxi;
    }
};