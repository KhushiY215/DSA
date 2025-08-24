class Solution {
public:

    int addElements(vector<int>& weights, int val, int days){
        int s=0;
        int c=0;
        for(int i=0;i<weights.size();i++){
            
            if(s+weights[i]>val){
                s=0;
                c++;
            }
           
                s=s+weights[i];

        }
        c++;
        if(c<=days) return 1;
        return 0;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int mini=0;
        int maxi=0;
        for(int i=0;i<weights.size();i++){
            mini=max(mini,weights[i]);
            maxi+=weights[i];
        }

        int low=mini,high=maxi;

        while(low<=high){
            int mid=low+(high-low)/2;
            if(addElements(weights,mid,days)){
                high=mid-1;
            }
            else low=mid+1;
        }
        return low;
        
    }
};
