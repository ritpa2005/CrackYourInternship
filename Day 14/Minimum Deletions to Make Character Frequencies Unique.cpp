    int minDeletions(string s) {
        unordered_map<int,int> m;
        for(char c:s){
            m[c]++;
        }
        vector<int> v;
        for(auto it:m){
            v.push_back(it.second);
        }
        sort(v.begin(), v.end());
        int i=v.size()-2, ans=0;
        while(i>=0){
            if(v[i+1]==0){
                ans+=v[i];
                v[i]=0;
            }
            else if(v[i]>=v[i+1]){
                ans+= (v[i]-v[i+1]+1);
                v[i]=v[i+1]-1;
            }
            i--;
        }
        return ans;
    }