    vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {   
        long long int lt=1,rt=1;
        vector<long long int> left(n), right(n), ans(n);
        left[0]=1; right[n-1]=1;
        for(int i=1;i<n;++i){
            left[i]=left[i-1]*nums[i-1];
        }
        for(int i=n-2;i>=0;--i){
            right[i]=right[i+1]*nums[i+1];
        }
        for(int i=0;i<n;++i){
            ans[i] = right[i]*left[i];
        }
        return ans;
    }