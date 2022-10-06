class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int,int> mp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
            
        }
        for(int i=0;i<n;i++){
            if(mp[nums[i]]>1){
                return nums[i];
            }
        }
        return 0;
    }
};