class Solution {
public:
    bool checkDivisibility(int n) {
       int m=n;
       int s=0;
       int p=1;
       while(m>0){
           int r=m%10;
           s+=r;
           p*=r;
           m/=10;
       }
       return (n%(s+p)==0);
       
    }
};