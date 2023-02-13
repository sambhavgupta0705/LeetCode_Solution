class Solution 
{
public:
    void swap(int a, int b, vector<int>& nums)
    {
        int t=nums[a];
        nums[a]=nums[b];
        nums[b]=t;
    }
    void permute(vector<int>& nums, int i, set<vector<int>> &ans, int n)
    {
        if(i>=n)
        {
            ans.insert(nums);
            return;
        }
        for(int x=i; x<n; x++)
        {
            swap(i,x,nums);
            permute(nums,i+1,ans,n);
            swap(i,x,nums);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) 
    {
        set<vector<int>> ans;
        int n=nums.size();
        permute(nums,0,ans,n);
        vector<vector<int>> a;
        for(auto it: ans) a.push_back(it);
        return a;
    }
};