    string reverseWords(string s) {
        vector<string> v;
        string temp;
        for(int i=0;i<s.size();++i){
            if(s[i]==' '){
                v.push_back(temp);
                temp="";
            }
            else{
                temp+=s[i];
            }
        }
        v.push_back(temp);
        string ans;
        for(int i=v.size()-1;i>=0;--i){
            if(v[i].empty()) continue;
            ans+=v[i]+' ';
        }
        ans.pop_back();
        return ans;
    }