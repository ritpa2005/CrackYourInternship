    vector<int> inorderTraversal(TreeNode* root) {
        if(root == NULL) return {};
        vector<int> v1,v2;
        v1 = inorderTraversal(root->left);
        v2 = inorderTraversal(root->right);
        v1.push_back(root->val);
        v1.insert(v1.end(),v2.begin(),v2.end());
        return v1;
    }