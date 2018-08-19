vector<int> inorderTraversal(TreeNode* root) {
    vector<int> result;
    inorderTraversalRe(root,result);
    return result;
}
    
void inorderTraversalRe(TreeNode* root, vector<int>& result){
    if(root!=NULL){
        inorderTraversalRe(root->left,result);
        result.push_back(root->val);
        inorderTraversalRe(root->right,result);
    }
}