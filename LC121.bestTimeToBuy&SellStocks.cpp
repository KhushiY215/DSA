class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mino=prices[0];
        int maxi =0;
        
        for(int a=1;a<prices.size();a++)
        {
            maxi=max(maxi, prices[a]-mino);
            mino=min(mino,prices[a]);
        }
        return maxi;
    }
};
