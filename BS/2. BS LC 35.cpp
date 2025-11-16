class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>pos(2,-1);
        int high=nums.size()-1,low=0;
         // find first occurrence - left
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] >= target) high = mid - 1;
            else low = mid + 1;
            if (nums[mid] == target) pos[0] = mid;
        }

        // find last occurrence - right
        low = 0, high = nums.size() - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] <= target) low = mid + 1;
            else high = mid - 1;
            if (nums[mid] == target) pos[1] = mid;
        }
        return pos;
    }
};
