    bool canJump(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        for(int i=0;i<n;++i){
            if(i>ans) return false;
            ans = max(ans, nums[i]+i);
            if(ans>=n-1) return true;
        }
        return true;
    }