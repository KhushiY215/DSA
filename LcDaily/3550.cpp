class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int a=nums.size();
        for(int I=0;I<a; I++){
           int b=nums[I];
          int s=0;
           while(b>0){
               int r=b%10;
               s+=r;
               b=b/10;
           }
           if(s==I){
               return I;
           }
        }
        return -1;
    }
};