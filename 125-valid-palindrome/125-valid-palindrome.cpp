class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.size();
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        string s1="";
        for(int i=0;i<n;i++){
            if(s[i]>='a' && s[i]<='z' || s[i]>='0' && s[i]<='9'){
                s1+=s[i];
            }
        }
        int low=0;
        int high=s1.size()-1;
        
        while(low<=high){
            if(s1[low]!=s1[high]){
                return false;
            }
            low++;
            high--;
        }
        return true;
    }
};