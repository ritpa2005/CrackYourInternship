    void rotate(vector<vector<int>>& m) {
        int n = m.size();
        for(int i=0;i<(n+1)/2;++i){
            for(int j=i;j<n-i-1;++j){
                int temp= m[i][j];
                m[i][j] = m[n-1-j][i];
                m[n-1-j][i] = m[n-1-i][n-j-1];
                m[n-1-i][n-j-1] = m[j][n-1-i];
                m[j][n-1-i] = temp;
            }
        }
    }