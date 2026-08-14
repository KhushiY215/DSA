class Solution {
  public:
    int cutRod(vector<int> &price) {
        // code here
        int n=price.size();
        vector<int>it(n,0);
        for(int i=0;i<n;i++){
            it[i]=i+1;
        }
        vector<vector<int>>dp(n+1,vector<int>(n+1,0));
    
        for(int i=1;i<=n;i++){
            for(int j=1;j<=price.size();j++){
                if(it[i-1]>j){
                     dp[i][j]=dp[i-1][j];
                }
                else
                dp[i][j]=max(dp[i-1][j],price[i-1]+dp[i][j-it[i-1]]);
    }
        }
        return dp[n][n];
    }
    
};
