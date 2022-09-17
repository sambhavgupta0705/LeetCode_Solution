#include <string> 
class Solution {
public:
        int romanValues(char c) {
        if(c=='I') return 1;
            else if (c=='V') return 5;
            else if (c=='X') return 10;
            else if (c=='L') return 50;
            else if (c=='C') return 100;
            else if (c=='D') return 500;
            else if (c=='M') return 1000;
            else return 0;
    }
    int romanToInt(string s) {
        int sum = 0;
        for(int i = 0; i<s.length(); i++)
        {
            if (romanValues(s[i]) < romanValues(s[i+1])){
                sum+= romanValues(s[i+1])-romanValues(s[i]);
                i++;
            }
            else sum+= romanValues(s[i]);
        }
        return sum;
    }
    
};