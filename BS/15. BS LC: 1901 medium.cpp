class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        
        int low = 0, high = m - 1;
        
        while (low <= high) {
            int mid = low + (high - low) / 2;
            
            // Find the row with the maximum element in column mid
            int row = 0;
            for (int i = 1; i < n; i++) {
                if (mat[i][mid] > mat[row][mid]) {
                    row = i;
                }
            }
            
            int left = (mid - 1 >= 0) ? mat[row][mid - 1] : -1;
            int right = (mid + 1 < m) ? mat[row][mid + 1] : -1;
            
            if (mat[row][mid] > left && mat[row][mid] > right) {
                return {row, mid}; // Found a peak
            }
            
            if (right > mat[row][mid]) {
                low = mid + 1; // Move right
            } else {
                high = mid - 1; // Move left
            }
        }
        
        return {-1, -1}; // Should not reach here
    }
};
