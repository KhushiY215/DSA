#include <bits/stdc++.h>
using namespace std;

vector<bool> subsetSum(vector<int>& arr, int sum) {
    int n = arr.size();

    vector<vector<bool>> dp(n + 1, vector<bool>(sum + 1, false));

    // Base cases
    for (int i = 0; i <= n; i++)
        dp[i][0] = true;

    // Fill DP table
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= sum; j++) {

            if (arr[i - 1] <= j)
                dp[i][j] = dp[i - 1][j] ||
                           dp[i - 1][j - arr[i - 1]];
            else
                dp[i][j] = dp[i - 1][j];
        }
    }

    // Return last row
    return dp[n];
}

int minSubsetSumDifference(vector<int>& arr) {

    int totalSum = 0;
    for (int x : arr)
        totalSum += x;

    vector<bool> possible = subsetSum(arr, totalSum);

    int ans = INT_MAX;

    // Check only till totalSum/2
    for (int s1 = 0; s1 <= totalSum / 2; s1++) {
        if (possible[s1])
            ans = min(ans, totalSum - 2 * s1);
    }

    return ans;
}

int main() {

    vector<int> arr = {1, 6, 11, 5};

    cout << "Minimum Subset Sum Difference = "
         << minSubsetSumDifference(arr);

    return 0;
}