class Solution {
public:
    int maxArea(vector<int>& heights) {

        int n = heights.size();

        int left = 0;
        int right = n - 1;

        int maxwater = 0;

        while(left < right)
        {
            int water = right - left;

            int height = min(heights[left], heights[right]);

            int area = water * height;

            maxwater = max(area, maxwater);

            if(heights[left] < heights[right])
            {
                left++;
            }
            else
            {
                right--;
            }
        }

        return maxwater;
    }
};