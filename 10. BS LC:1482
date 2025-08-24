class Solution {
public:
    
    int possible(vector<int>& bloomDay,int day, int m, int k){
        int c=0;
        int bd=0;
        for(int i=0;i<bloomDay.size();i++){
            if(bloomDay[i]<=day){
             c++;
            }
            else{
                bd+=c/k;
                c=0;
            }
        }
        bd+=c/k;
        if(bd>=m) return 1;
        return 0;
    }

    int minDays(vector<int>& bloomDay, int m, int k) {
        int mini=INT_MAX, maxi=INT_MIN;
        for(int i=0;i<bloomDay.size();i++){
            mini=min(bloomDay[i],mini);
            maxi=max(bloomDay[i],maxi);
        }
        
        int low=mini, high=maxi;
        long long val=m*1LL*k*1LL;
        if(val>bloomDay.size()) return -1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(possible(bloomDay,mid,m,k)){
                high=mid-1;
            }
            else low=mid+1;

        }
        return low;
    }
};
