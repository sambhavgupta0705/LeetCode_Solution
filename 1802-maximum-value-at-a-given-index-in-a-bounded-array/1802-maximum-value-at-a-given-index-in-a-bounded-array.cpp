class Solution {
public:
    int maxValue(int n, int index, int maxSum) {
        long long int mn = 1,mx = maxSum,mid,ans,f,l,k;
        while(mn <= mx){
            mid = (mx-mn)/2+mn;
            f = mid-index;
            l = mid-(n-index-1);
            k = 0;
            if(f<=0){
                k += -f+1;
                k += (mid*(mid+1))/2;
            }else{
                k += ((index+1)*(mid+f))/2;
            }
            if(l<=0){
                k += -l+1;
                k += (mid*(mid-1))/2;
            }else{
                k += ((n-index-1)*(mid-1+l))/2;
            }
            if(k>maxSum){
                mx = mid-1;
            }else{
                ans = mid;
                mn = mid+1;
            }
        }
        return ans;
    }
};