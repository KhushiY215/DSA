class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int>pos(2,-1);
        int high=nums.size()-1,low=0;
        sort(nums.begin(),nums.end());
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
        int c=0;
        
        vector<int> ans;
        if (pos[0] != -1 && pos[1] != -1) {
            for (int i = pos[0]; i <= pos[1]; i++) {
                ans.push_back(i);
            }
        }
        return ans;
    }
};
