    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> m;
        for(string s : strs){
            string ss=s;
            sort(ss.begin(),ss.end());
            m[ss].push_back(s);
        }

        vector<vector<string>> vvs;
        for(auto it :m){
            vvs.push_back(it.second);
        }
        return vvs;
    }