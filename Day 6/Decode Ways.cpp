    int numDecodings(string s) {
        int n = s.length();
        if(n==0 || s[0]=='0') return 0;
        if(n==1) return 1;

        vector<int> v(n+1,0);
        v[0]=1;
        v[1]=1;
        for(int i=1;i<n;i++){
            int x = (int)s[i] -48;
            int y = ((int)s[i-1] - 48)*10 + x;
            if(x>0 && x<10) v[i+1] += v[i];
            if(y>=10 && y<=26) v[i+1]+=v[i-1];
        }

        return v[n];
    }