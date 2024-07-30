    int longestCommonSubstr(string s1, string s2) {
        // your code here
        int m = s1.size(), n = s2.size();
        int ans=0;
        vector<vector<int>> dp(m+1, vector<int>(n+1));
        for(int i=1;i<=m;++i){
            for(int j=1;j<=n;++j){
                if(s1[i-1]==s2[j-1]){
                    dp[i][j] = dp[i-1][j-1]+1;
                    ans=max(ans, dp[i][j]);
                }
            }
        }
        return ans;
    }