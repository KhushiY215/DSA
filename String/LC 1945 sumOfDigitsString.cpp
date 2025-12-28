
class Solution {
public:
    int getLucky(string s, int k) {
        int n,m;
        int sum=0;
        for(int i=0;i<s.size();i++){
            n=s[i]-'a'+1;
            while(n > 0){  //CAREFUL HERE REMEMBER FOR 'z', n=26, BUT SUM SHOULD ADD IT AS 2+6 SO THIS WHILE LOOP IS NEEDED FOR CORRECT CALCULATIONS
                sum += n % 10;
                n /= 10;
            }
        }
        
        while(k>1){
            m=sum;
            sum=0;
            while(m>0){
                int r=m%10;
                sum+=r;
                m/=10;
            }  
            k--;  
        }
        return sum;
    }
};
