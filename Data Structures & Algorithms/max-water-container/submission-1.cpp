class Solution {
public:
    int maxArea(vector<int>& heights) 
    {
        int n = heights.size();
        int maxwater = 0;
        int area=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                area=min(heights[i],heights[j])*(j-i);
                maxwater=max(area,maxwater);
            }
        }
        return maxwater;
    }
};