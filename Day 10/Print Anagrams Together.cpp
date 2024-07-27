    vector<vector<string>> Anagrams(vector<string>& string_list) {
        //code here
        unordered_map<string,vector<string>> m;
        for(string s:string_list){
            string temp = s;
            sort(temp.begin(), temp.end());
            m[temp].push_back(s);
        }
        vector<vector<string>> vv;
        for(auto it:m){
            vv.push_back(it.second);
        }
        sort(vv.begin(), vv.end());
        return vv;
    }