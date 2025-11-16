class Solution {
public:

    int Arr(vector<int> &nums, int val, int k){
        int sumn=0, cnt=1;
        for(int i=0;i<nums.size();i++){

            if(sumn+nums[i]<=val){
                sumn+=nums[i];
            }
            else{
                cnt++;
                sumn=nums[i];
            }

        }
        return cnt;
    }

    int splitArray(vector<int>& nums, int k) {
        int low=0;
        int high=0;
        for(int i=0;i<nums.size();i++){
            low=max(nums[i],low);
            high+=nums[i];
        }

        while(low<=high){

            int mid=low+(high-low)/2;
            int res=Arr(nums,mid,k);
            if(res>k){
                low=mid+1;
            }
            else
            high=mid-1;
        }
        return low;
        
    }
};
