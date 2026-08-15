class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int n=text1.size();
        int m=text2.size();
        vector<vector<int>>dp(n+1,vector<int>(m+1,0));
        
        if(n==0 || m==0) return 0;
        
        for(int a=1;a<=n;a++){
            for(int j=1;j<=m;j++){
                if(text1[a-1]==text2[j-1])
                dp[a][j]=1+dp[a-1][j-1];
                
                else {
                   dp[a][j]=max(dp [a-1][j],dp[a][j-1]);
                }
            }
        }
        return dp[n][m];
        
    }
};