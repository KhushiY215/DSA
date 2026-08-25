class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());

        int i = k;
        int a = 0;

        while (a < nums.size()) {

            if (nums[a] < i) {
                a++;
            }
            else if (nums[a] == i) {
                i += k;
                a++;
            }
            else {
                return i;
            }
        }

        return i;
    }
};