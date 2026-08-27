class Solution {
public:
    bool canJump(vector<int>& nums) {
        int ans=0;
        int n=nums.size();
        for(int a=0;a<n;a++){
            if(a>ans) return false;
            ans=max(ans,a+nums[a]);
        }
        return true;
       
    }
};