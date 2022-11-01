class Solution {
public:
    void moveZeroes(vector<int>& nums) {
      int n=nums.size();
        int ct=0;
        for (auto it = nums.begin(); it != nums.end(); ++it)
        {
            if(*it==0)
            {
                nums.erase(it); 
                it--;
                ct++;
            }
           
        }
        
        for(int i=0;i<ct;i++)
        {
            nums.push_back(0);
        }
    
   

            
    }
    
};