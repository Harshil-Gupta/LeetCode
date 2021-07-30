class Solution {
public:
    
    int dp[101][101];
    
    int uniquePathsrec(int r, int c){
        
        if(dp[r][c]!=-1){
            return dp[r][c];
        }
        if(r==0 || c==0){
            return 1;
        }
        if(r<0 || c<0){
            return 0;
        }
        int up = uniquePathsrec(r-1,c);
        int left = uniquePathsrec(r,c-1);
        dp[r][c] = up+left;
        return dp[r][c];
    }
    
    
    int uniquePaths(int r, int c) {
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            dp[i][j] = -1;
        }
    }
        return uniquePathsrec(r-1,c-1);
    }
};
