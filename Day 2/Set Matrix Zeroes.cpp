    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix[0].size();
        int m = matrix.size();
        set<int> sr,sc;
        for(int i=0;i<m;++i){
            for(int j=0;j<n;++j){
                if(matrix[i][j]==0){
                    sr.insert(i);
                    sc.insert(j);
                }
            }
        }
        for(auto i:sr){
            for(int j=0;j<n;j++){
                matrix[i][j]=0;
            }
        }
        for(auto j:sc){
            for(int i=0;i<m;i++){
                matrix[i][j]=0;
            }
        }
    }