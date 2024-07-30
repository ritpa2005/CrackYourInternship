    int lengthOfLIS(vector<int>& nums) {
        int ans=1;
        int n=nums.size();
        vector<int> v(n,1);
        for(int i=1;i<n;i++){
            for(int j=i-1;j>=0;j--){
                if(nums[j]<nums[i]){
                    int x=v[j]+1;
                    v[i] = max(v[i],x);
                }
            }
            ans = max(ans, v[i]);
        }
        return ans;
    }