    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        int rev=0;
        vector<vector<int>> ans;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int n = q.size();
            vector<int> temp;
            for(int i=0;i<n;++i){
                TreeNode* p = q.front();
                q.pop();
                if(p==NULL) continue;
                temp.push_back(p->val);
                q.push(p->left);
                q.push(p->right);
            }
            if(temp.size()>0){
                if(rev){
                    reverse(temp.begin(),temp.end());
                }
                ans.push_back(temp);
                rev=(rev+1)%2;
            }
        }
        return ans;
    }