class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char ,int> f;
        int high=0;
        int low=0;
        int maxi= 0;
        int diff =0;
        for( int high=0 ;high<s.size() ; high++)
        {
            f[s[high]]++;
            diff=max(diff ,f[s[high]]);
            while((high-low+1)-diff>k)
            {
                f[s[low]]--;
                low++;
            }
            maxi= max(high-low+1 ,maxi);
        }
        return maxi;
    }
};
