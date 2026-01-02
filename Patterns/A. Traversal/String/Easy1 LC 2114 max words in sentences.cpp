class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int words=0;
        int maxi=0;
        for(int i=0;i<sentences.size();i++){
            string s=sentences[i];
            words=0;
            for(char c:s){
                if(c==' ') words++;  //made mistake by using " " instead of ' '
            }

            maxi=max(maxi,words+1);
        }
        return maxi;
    }
};
