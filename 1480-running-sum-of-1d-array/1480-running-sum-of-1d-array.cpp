class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int sum=0;
        vector< int> v;
        for(int i=0;i<nums.size();i++){
            int x=nums[i]+sum;
            sum=x;
            v.push_back(x);
            
        }
        return v;
    }
};