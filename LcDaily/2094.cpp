class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        
        int c=0;
        int l=0;
        int r=0;
        string a;
       string best="";
        int d=l;
        for(int r=0;r<s.size();r++){
            if(s[r]=='1') c++;
            
            while(c>k){
                if(s[l]=='1') c--;
                l++;
            }
            while(c==k && l<=r && s[l]=='0'){
                l++;
            }
            if(c==k){
                a=s.substr(l,r-l+1);
                
               if (best.empty() ||
                    a.size() < best.size() ||
                    (a.size() == best.size() && a < best)) {
                    best = a;
            }
        }
        }
        return best;
        
    }
};
