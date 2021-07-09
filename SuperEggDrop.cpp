class Solution {
public:
    int superEggDrop(int k, int n) {
        vector<int> dp(k + 1, 0);
        int ans;
        for(ans=0;dp[k]<n;ans++){
            for(int egg=k;egg>0;egg--){
                dp[egg]= dp[egg-1]+dp[egg]+1;
            }
        }
        return ans;
    }
};
