class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
          int n = nums.size();
        
        
        
        sort(nums.begin(), nums.end());
        
        int maxi = 0;
        
        for(int i = 0; i <= n - 3; i++)
        {
            
            if(nums[i] + nums[i + 1] > nums[i + 2])
            {
                maxi = max(maxi, nums[i] + nums[i + 1] + nums[i + 2]);
            }
        }
        
        return maxi;
    }
};