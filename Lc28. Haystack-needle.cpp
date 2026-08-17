class Solution {
public:
    int strStr(string haystack, string needle) {
        
        int k=0;
        for(int a=0;a+needle.size()<=haystack.size();a++){
            
            k=0;
            for(int j=0;j<needle.size();j++){
                if(needle[j]==haystack [a+j]){
                    k++;
                }
            }
            if(k==needle.size())
            return a;
            
        }
        return -1;
    }
};
