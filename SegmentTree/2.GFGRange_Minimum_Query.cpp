class Solution {
  public:
    vector<int> rangeMinQuery(vector<int>& arr, vector<vector<int>>& queries) {
        // code here
        
        int n= arr.size();
        vector<int>st(4*n);
        vector<int> ans;
        build(0,0,n-1,st,arr);
        int q=queries.size();
        for(int i=0;i<q;i++){
           int srt=queries[i][0];
           int en=queries[i][1];
           
           ans.push_back(query(srt,en,0,0,n-1,st));
        }
        
        return ans;
        
    }
    void build(int i, int l, int r, vector<int> &st,vector<int>&arr){
        if(l==r){
            st[i]=arr[l];
            return;
        }
        
        int mid=(l+r)/2;
        
        build(i*2+1,l,mid,st,arr);
        build(i*2+2,mid+1,r,st,arr);
        
        st[i]=min(st[2*i+1],st[2*i+2]);
        
    }
    
    int query(int srt,int en, int i, int l, int r, vector<int> &st){
     
     if(l>en || r<srt){
         return INT_MAX;
     }
     if(l>=srt && r<=en){
         return st[i];
     }
     int mid=(l+r)/2;
     
     return min(query(srt,en,i*2+1,l,mid,st),query(srt,en,2*i+2,mid+1,r,st));
     
        
    }
};
