class Solution {
public:
    int findMin(vector<int>& nums) {
        int s=INT_MAX;
        int low=0,high=nums.size()-1;

        while(low<=high){
            int mid=low+(high-low)/2;

            if(nums[low]<=nums[mid]){
                s=min(s,nums[low]);
                low=mid+1;
            }
            else{
                s=min(s,nums[mid]);
                high=mid-1;              
            }
        }
        return s;

    }
};
