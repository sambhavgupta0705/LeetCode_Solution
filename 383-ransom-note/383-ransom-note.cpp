class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {

        int counter[26]={0};
        for(char ch:magazine){
            counter[ch-'a']++;
        }
        for(char cm:ransomNote){
            if(counter[cm-'a']--<=0){
                return false;
            }
        }
        return true;
        }
        
    };
