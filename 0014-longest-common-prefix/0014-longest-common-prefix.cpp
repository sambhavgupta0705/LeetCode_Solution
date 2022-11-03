class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        

        sort(strs.begin(), strs.end());
        string ans = ""; // for storing answer
        
        string a = strs[0]; // after sorting first element
        string b = strs[n-1]; // after sorting last element
        
        
        for(int i = 0; i < a.length(); i++){
            if(a[i] == b[i]){
                // If same add in answer
                ans += a[i];
            }else{
                break;
            }
        }
        return ans;
    }
};