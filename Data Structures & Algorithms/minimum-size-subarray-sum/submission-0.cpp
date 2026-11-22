
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        
        int j = 0;
        int mini = INT_MAX;

        while(j < nums.size())
        {
            int sum = 0;

            for(int i = j; i < nums.size(); i++)
            {
                sum = sum + nums[i];

                if(sum >= target)
                {
                    int length = (i - j) + 1;
                    mini = min(length, mini);
                    break;
                }
            }

            j++;
        }

        if(mini == INT_MAX)
        {
            return 0;
        }

        return mini;
    }
};
