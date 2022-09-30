class Solution {
public:
    bool judgeCircle(string moves) {
        int n=moves.size();
        int cnt1=0,cnt2=0;
        for(int i=0;i<n;i++){
            if(moves[i]=='D') cnt1++;
            else if(moves[i]=='U') cnt1--;
            else if(moves[i]=='L') cnt2++;
            else cnt2--;
        }
        if(cnt1==0 and cnt2==0) return true;
        else return false;
    }
};