class NumArray {
    vector<int> tree;
    int n;
public:
    
    NumArray(vector<int>& nums) {
     n=nums.size();int mid;
     tree.resize(4*n);
     segTree(0,0,n-1,nums);
    }

    void segTree(int node,int l,int r, vector<int>& nums){
        if(l==r) {
            tree[node]=nums[l];
            return;
        }
        int mid=(l+r)/2;
        segTree(2*node+1,l,mid,nums);
        segTree(2*node+2,mid+1,r,nums);
        tree[node]=tree[2*node+1]+tree[2*node+2];
    }
    
    void updateTree(int node,int l, int r,int index, int val) {
        if(l==r) {
            tree[node]=val;
            return;
        }
       int mid=(l+r)/2;
        if(index<=mid)
        updateTree(2*node+1,l,mid,index,val);
        else
        updateTree(2*node+2,mid+1,r,index,val);
        tree[node]=tree[2*node+1]+tree[2*node+2];
    }
    int query(int node,int l,int r, int ql, int qr){
        if(r<ql || l>qr) return 0;

        if(ql<=l && r<=qr) return tree[node];

        int mid=(l+r)/2;
        return query(2*node+1, l, mid,ql,qr)+query(2*node+2, mid+1,r,ql,qr) ;
    }
    
    void update(int index, int val) {
        return updateTree(0,0,n-1,index,val);
    }
    int sumRange(int left, int right) {
        return query(0,0,n-1,left, right);
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
 */
