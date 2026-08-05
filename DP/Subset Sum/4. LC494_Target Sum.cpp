class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        
        int total=0;
        for(int x:nums)
        total+=x;

        if(abs(target)>total) return 0;
        if((total+target)%2!=0)
        return 0;

        int t=(total+target)/2;

        return subSum(nums,t);
    }
    int subSum(vector<int>&nums, int s){
        int n=nums.size();
        vector<vector<int>>dp(n+1,vector<int>(s+1,0));
        
        dp[0][0]=1;
        
        for(int i=1;i<=n;i++){
            for(int j=0;j<=s;j++){
                if(nums[i-1]>j){
                    dp[i][j]=dp[i-1][j];
                }
                else
                dp[i][j]=dp[i-1][j]+dp[i-1][j-nums[i-1]];
            }
        }
        return dp[n][s];
    }
};
