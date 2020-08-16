//https://leetcode.com/problems/largest-rectangle-in-histogram/
//Times out

class Solution
{
    public:
    int largestRectangleArea(vector<int> &heights)
    {
        int maxarea = 0;
        
        for (int i = 0; i < heights.size(); i++)
        {
            for (int j = i; j < heights.size(); j++)
            {
                int minheight = INT_MAX;
                for (int k = i; k <= j; k++)
                    minheight = min(minheight, heights[k]);
                maxarea = max(maxarea, minheight * (j - i + 1));
            }
        }
        return maxarea;
    }
};