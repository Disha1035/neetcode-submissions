class Solution {
public:
    int majorityElement(vector<int>& nums) {
       unordered_map<int, int> f;
        for(int i=0; i<nums.size() ;i++)
        {
            f[nums[i]]++;
        }
        int maxfreq=0;
        int ans =0;
        for(auto s: f)
        {
            if(s.second>maxfreq)
            {
                maxfreq=s.second;
                ans= s.first;
            }
        }
        return ans;
    }
};