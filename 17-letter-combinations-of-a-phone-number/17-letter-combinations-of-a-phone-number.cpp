class Solution {
public:
vector<string> letterCombinations(string digits) {
        if (digits.empty()) return {};
        vector<string> ans = {""};
        vector<string> mapping = {"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv","wxyz"};
        for (char i : digits) {
            int cur = i - '2';
            vector<string> newans;
            for (char j : mapping[cur]) {
                for (string k : ans) newans.push_back(k + j);
            }
            swap(ans, newans);
        }
        return ans;
    }
};