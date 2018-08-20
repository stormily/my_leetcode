bool isValidBST(TreeNode *root) {
    return isValidBST(root, LONG_MIN, LONG_MAX);
}
    
bool isValidBST(TreeNode *root, long m, long n) {
    if (root == NULL) 
        return true;
    if (root->val <= m || root->val >= n) 
        return false;
    return isValidBST(root->left, m, root->val) && isValidBST(root->right, root->val, n);
}