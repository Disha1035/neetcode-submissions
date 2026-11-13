class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> temp=intervals;
        vector<vector<int>> res;
        temp.push_back(newInterval);
        sort(temp.begin(),temp.end());
        int start1= temp[0][0];
        int end1= temp[0][1];
        for( int i=1 ;i<temp.size();i++)
        {
            int start2= temp[i][0];
            int end2= temp[i][1];
            if(end1>=start2)
            {
                start1=start1;
                end1=max(end1,end2);
                continue;
            }
            res.push_back({start1,end1});
            start1=start2;
            end1=end2;

        }
        res.push_back({start1,end1});
        return res;
        
    }
};
