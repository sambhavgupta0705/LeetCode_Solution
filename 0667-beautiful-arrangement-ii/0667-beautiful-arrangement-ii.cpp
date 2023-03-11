class Solution {
public:
    vector<int> constructArray(int n, int k) {
        vector<int> ans(n);
        for(int i = 0; i < k / 2; ++i){
            ans[2 * i] = i + 1;
            ans[2 * i + 1] = n - i;
        }
        int diff, start;
        if(k % 2){
            diff = 1;
            start = k / 2 + 1;
        }else{
            diff = -1;
            start = n - k / 2;
        }
        for(int i = k / 2 * 2; i < n; ++i){
            ans[i] = start;
            start += diff;
        }
        return ans;
    }
};