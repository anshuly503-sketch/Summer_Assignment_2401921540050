class Solution {
public:
    int maxArea(vector<int>& height) {
        int start = 0 ,end = height.size()-1,water;
        int maxi = INT_MIN;
        while(start<end)
        {
            if(height[start]<height[end])
            {
                water = (end-start)*height[start];
                start++;
            }
            else if(height[start]==height[end])
            {
                water = (end-start)*height[start];
                start++;
            }
            else
            {
                water = (end-start)*height[end];
                end--;
            }
            maxi = max(maxi,water);
        }
        return maxi;
    }
};
