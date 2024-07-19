    int maxProfit(vector<int>& p) {
        int ans=0, n= p.size();
        for(int i=1;i<n;i++){
            if(p[i]>p[i-1]){
                ans+= (p[i]-p[i-1]);
            }
        }
        return ans;
    }