//  https://www.interviewbit.com/problems/max-sum-path-in-binary-tree/


int fun(TreeNode* root, int &res){
        if(root == NULL) return 0;
        int l = max(0,fun(root->left, res));
        int r = max(0,fun(root->right, res));

        int case1 = max(l,r)+root->val;
        int case2 = max(root->val, l+r+root->val);
        res = max(res, max(case1, case2));
        return case1;
    }
int Solution::maxPathSum(TreeNode* root) {
    int res = INT_MIN;
    fun(root,res);
    return res;
}
