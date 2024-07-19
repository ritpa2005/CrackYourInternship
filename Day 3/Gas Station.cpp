    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int sc=0, sg=0, ans=0, sum=0;
        int n = gas.size();
        for(int i=0;i<n;i++){
            sc+= cost[i];
            sg+= gas[i];
            sum += gas[i]-cost[i];
            if(sum<0){
                ans=i+1;
                sum=0;
            }
        }
        if(sc>sg) return-1;
        return ans;
    }