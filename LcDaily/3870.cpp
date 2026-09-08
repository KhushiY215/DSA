class Solution {
public:
    int countCommas(int n) {
        int c=0;
        
        if(n>=1000)
       {
           c=n-1000+1;
       }
       return c;
    }
};