    bool valid(TreeNode* root, long min, long max){
        if(root == NULL) return true;
        if(root->val >= max || root->val <= min) return false;
        return valid(root->left, min, root->val) && valid(root->right, root->val, max);
    }
    bool isValidBST(TreeNode* root) {
        return valid(root, LONG_MIN, LONG_MAX);
    }