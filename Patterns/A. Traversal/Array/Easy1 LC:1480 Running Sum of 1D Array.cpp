//single pass solution
//O(n)

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n=nums.size();
        if(n<=1) return nums;
        vector<int>sum(n,0);
        sum[0]=nums[0];
        for(int i=0;i<nums.size()-1;i++){
           
           sum[i+1]=nums[i+1]+sum[i];
        }
       return sum;
    }
};
