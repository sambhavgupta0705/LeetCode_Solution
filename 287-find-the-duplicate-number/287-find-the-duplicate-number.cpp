class Solution {
public:
    int findDuplicate(vector<int>& nums) {
     int l = nums.size();
        for(int i = 0 ; i<l ; i++){
           if(nums[abs(nums[i])]<0){
               return abs(nums[i]);
            
           } 
            nums[abs(nums[i])] *= -1;
        }
        return 0;
    }
};