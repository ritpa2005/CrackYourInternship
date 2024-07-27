    int findMaxForm(vector<string>& strs, int m, int n) {
        int s = strs.size();
        vector<vector<int>> dp(m+1, vector<int>(n+1,0));
        for(int i=0;i<s;++i){
            string temp = strs[i];
            int c0=0,c1=0;
            for(char c:temp){
                if(c=='0') c0++;
                else c1++;
            }
            for(int j=m;j>=c0;j--){
                for(int k=n;k>=c1;--k){
                    dp[j][k] = max(dp[j][k], dp[j-c0][k-c1]+1);
                }
            }
        }
        return dp[m][n];
    }