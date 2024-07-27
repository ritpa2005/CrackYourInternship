    int coinChange(vector<int>& coins, int amount) {
        vector<int> dp(amount+1, -1);
        dp[0]=0;

        for(int k=1;k<=amount;++k){
            for(int c:coins){
                if(k-c >=0 && dp[k-c]!=-1){
                    if (dp[k]==-1) dp[k]=dp[k-c]+1;
                    else dp[k]= min(dp[k], dp[k-c]+1);
                }
            }
        }
        return dp[amount];
    }