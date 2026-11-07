class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int,int> f;

        for(int i = 0; i < nums.size(); i++)
        {
            f[nums[i]]++;
        }

        vector<int> ans;

        while(k > 0)
        {
            int maxi = 0;
            int element = 0;

            for(int i = 0; i < nums.size(); i++)
            {
                if(f[nums[i]] > maxi)
                {
                    maxi = f[nums[i]];
                    element = nums[i];
                }
            }

            if(maxi == 0)
                break;

            ans.push_back(element);
            f[element] = 0;

            k--;
        }

        return ans;
    }
};