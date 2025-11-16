class Solution {
public:
    
    int findMax(vector<int>& piles){
        int maxi=piles[0];
        for(int i=0;i<piles.size();i++){
            maxi=max(piles[i],maxi);
        }
        return maxi;
    }

    int calcTotalHour(vector<int>& piles,int hour){
        int totalh=0;
        for(int i=0;i<piles.size();i++){
            totalh+=ceil((double)piles[i]/(double)hour);
        }
        return totalh;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int n=findMax(piles);

        int low=1,high=n;
       
        while(low<high){
           int mid=low+(high-low)/2;
            int totalh = calcTotalHour(piles, mid);
            if(totalh > h) {
                low = mid + 1;  // too slow
            } else {
                high = mid;     // works, try smaller
            }
        }
        return low;
    }
};
