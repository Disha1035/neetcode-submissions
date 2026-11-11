class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<int , int> f;
        int low = 0;
        int maxi= 0;
        int high =0;
        for( high =0; high< s.size() ;high++)
        {
            f[s[high]]++;
            while(f[s[high]] > 1)
            {
                f[s[low]]--;
                if(f[s[low]]==0)
                {
                    f.erase(s[low]);
                }
                low++;
            }
            maxi =max(maxi ,high-low+1);
        }
        return maxi;
        
    }
};
