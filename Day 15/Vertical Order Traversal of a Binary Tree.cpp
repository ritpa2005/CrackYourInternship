    void solve(TreeNode* root, int col, int row, map<int, vector<vector<int>>> &m){
        if(root==NULL) return;
        if(row>=m[col].size()) m[col].resize(row+1);
        m[col][row].push_back(root->val);
        solve(root->left, col-1, row+1, m);
        solve(root->right, col+1, row+1, m);
    }

    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int, vector<vector<int>>> m;
        solve(root, 0, 0, m);

        vector<vector<int>> ans;
        for(auto it:m){
            vector<int> temp;
            for(auto v:it.second){
                sort(v.begin(), v.end());
                for(int x:v){
                    temp.push_back(x);
                }
            }
            ans.push_back(temp);
        }
        return ans;
    }