class Solution {
public:

    int checkDivisor(vector<int>& nums,int val, int threshold){
        int s=0;
        for(int i=0;i<nums.size();i++){
            s+=ceil((float)nums[i]/(float)val);        
        }
        if(s<=threshold) return 1;
        return 0;
    }

    int smallestDivisor(vector<int>& nums, int threshold) {
        int maxi=nums[0];
        for(int i=0;i<nums.size();i++){
            maxi=max(nums[i],maxi);
        }
        int low=1, high=maxi;

        while(low<=high){

            int mid=low+(high-low)/2;
            if(checkDivisor(nums, mid, threshold)){
                high=mid-1;
            }
            else low=mid+1;
        }
        return low;
    }
};
