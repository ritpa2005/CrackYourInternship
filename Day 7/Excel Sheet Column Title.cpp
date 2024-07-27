    string convertToTitle(int cn) {
        string ans;
        while(cn>0){
            if(cn%26==0){
                ans = 'Z' + ans;
            }
            else ans = (char)(cn%26 +64) + ans; 
            cn= (cn-1)/26;
        }
        return ans;
    }