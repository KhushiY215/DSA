class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int n=nums.size();
        
        int ts=0;
        for(int x:nums){
            ts+=x;
            
        }
        if(ts%2!=0) return false;
        else
        return subsum(nums,n,ts/2);
    }
    bool subsum(vector<int>&nums,int n, int sum){
        vector<vector<bool>> t(n+1,vector<bool>(sum + 1, false));
        
        for(int i=0;i<=n;i++){
            t[i][0]=true;
        }
        
        
        for(int i=1;i<=n;i++){
            for(int j=1;j<=sum;j++){
                if(nums[i-1]>j) t[i][j]=t[i-1][j];
                else t[i][j]=t[i-1][j] || t[i-1][j-nums[i-1]];
            }
        }
        return t[n][sum];
    }
};