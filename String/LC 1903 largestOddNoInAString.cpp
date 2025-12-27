//check from right to left

class Solution {
public:
    string largestOddNumber(string num) {
        string st;
        for(int i=num.size()-1;i>=0;i--){
            int n=num[i]-'0';
            if(n%2==1){
               return num.substr(0,i+1);
            }
            
        }
        return "";
    }
};
