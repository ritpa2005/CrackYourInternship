    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        vector<vector<int>> ans;
        while(!q.empty()){
            vector<int> temp;
            int n = q.size();
            for(int i=0;i<n;++i){
                TreeNode* p = q.front();
                q.pop();
                if(p==NULL) continue;
                temp.push_back(p->val);
                q.push(p->left);
                q.push(p->right);
            }
            if(temp.size()>0) ans.push_back(temp);
        }
        return ans;
    }