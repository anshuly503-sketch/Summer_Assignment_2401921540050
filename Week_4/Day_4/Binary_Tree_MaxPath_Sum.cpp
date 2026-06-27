class Solution {
public:
    int maxDown(TreeNode* root)
    {
        if(root ==NULL)
            return 0;
        int left = maxDown(root->left);
        int right = maxDown(root->right);
        return max(0, root->val+max(left, right));
    }
    void dfs(TreeNode* root,int &ans)
    {
        if(root ==NULL)
            return;
        int left =maxDown(root->left);
        int right =maxDown(root->right);
        ans =max(ans,left+right+root->val);
        dfs(root->left,ans);
        dfs(root->right,ans);
    }

    int maxPathSum(TreeNode* root){
        int ans = INT_MIN;
        dfs(root, ans);
        return ans;
    }
};
