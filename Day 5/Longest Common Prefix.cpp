    string longestCommonPrefix(vector<string>& strs) {
        char temp;
        string ans;
        int j=0,t=0;
        while(1){
            if(j>=strs[0].size()){
                t=1;
                break;
            }
            temp = strs[0][j];
            for(int i=1;i<strs.size();++i){
                if(j>=strs[i].size() || strs[i][j]!=temp){
                    t=1;
                    break;
                }
            }
            if(t==1){
                break;
            }
            ans+=temp;
            j++;
        }
        return ans;
    }