class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>res;
        vector<int>arr1;
        vector<int>arr2;
        
        arr1.push_back(nums[0]);
        arr2.push_back(nums[1]);
        for(int a=2;a<n;a++){
            
            if(arr1.back()>arr2.back()){
                arr1.push_back(nums[a]);
            }
            else arr2.push_back(nums[a]); 
            }
        
        
        for(int a=0;a<arr1.size();a++){
            res.push_back(arr1[a]);
            }
            for(int b=0;b<arr2.size();b++){
                res.push_back(arr2[b]);
            }
        return res;
    }
};
