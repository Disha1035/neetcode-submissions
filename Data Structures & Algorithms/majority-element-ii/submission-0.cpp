class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
        unordered_map<int,int> f;
        for(int i=0;i<nums.size() ;i++)
        {
            f[nums[i]]++;
        }
        for(auto j: f)
        {
            if(j.second>nums.size()/3)
            {
                ans.push_back(j.first);
            }
        }
        return ans;
    }
};