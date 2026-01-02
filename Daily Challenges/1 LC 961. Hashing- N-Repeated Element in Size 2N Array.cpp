//Array + Hashing

/** My solution- O(n^2) Brute Force 
Use unordered_Set or unordered_map for optimal-> O(n)**/

// Brute force
class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n=nums.size();
        int c=0;
        int val=0;
        for(int i=0;i<n;i++){
            c=0;
            for(int j=0;j<n;j++){
            if(nums[i]==nums[j]) {
                c++;}
        }
        if (c==n/2) val=nums[i];
        }
        return val; 
    }
};

//Optimal

class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_map<int, int> freq;
        int n = nums.size() / 2;
        
        for (int x : nums) {
            freq[x]++;
            if (freq[x] == n) {
                return x;
            }
        }
        return -1;
    }
};
//or Optimal 2
class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_set<int> seen;
        for (int x : nums) {
            if (seen.count(x)) {
                return x;
            }
            seen.insert(x);
        }
        return -1; // will never reach here
    }
};
