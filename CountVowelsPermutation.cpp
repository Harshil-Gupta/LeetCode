class Solution {
public:   
    const int mod = 1e9 + 7;
    int countVowelPermutation(int n) {
        long dp[n+1][5];
        for(int i=0;i<=n;i++){
            for(int j=0;j<5;j++){
                dp[i][j] = 0;
            }
        }
        // 0a 1e 2i 3o 4u
        for(int i=0;i<5;i++){
            dp[1][i] = 1;
        }
        for(int i=1;i<n;i++){
            dp[i+1][0] = (dp[i][1] + dp[i][2] + dp[i][4])%mod;
            dp[i+1][1] = (dp[i][0] + dp[i][2] + dp[0][0])%mod;
            dp[i+1][2] = (dp[i][1] + dp[i][3] + dp[0][0])%mod;
            dp[i+1][3] = (dp[i][2] + dp[0][0] + dp[0][0])%mod;
            dp[i+1][4] = (dp[i][2] + dp[i][3] + dp[0][0])%mod;
        }
        long ans = 0;
        for(int i=0;i<5;i++){
            ans = (ans + dp[n][i])%mod;
        }
        return ans;
    }
};
