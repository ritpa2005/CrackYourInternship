    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size();
        vector<int> ans;
        int dir=0;
        int right=0, bottom=0, left=n-1, top=m-1;
        while(right<=left && top>=bottom){
            if(dir==0){
                for(int j=right;j<=left;++j){
                    ans.push_back(matrix[bottom][j]);
                }
                bottom++;
            }
            else if(dir==1){
                for(int j=bottom;j<=top;++j){
                    ans.push_back(matrix[j][left]);
                }
                left--;
            }
            else if(dir==2){
                for(int j=left;j>=right;j--){
                    ans.push_back(matrix[top][j]);
                }
                top--;
            }
            else{
                for(int j=top;j>=bottom;--j){
                    ans.push_back(matrix[j][right]);
                }
                right++;
            }
            dir=(dir+1)%4;
        }
        return ans;
    }