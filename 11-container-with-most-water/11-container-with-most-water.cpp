class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int i = 0, j = n-1, area = 0;
        
        while(i<j)
        {
            area = max(area, min(height[i], height[j])*(j-i));
            
            if(height[i] < height[j])
                i++;
            else
                j--;
        }
        return area;
    }
};