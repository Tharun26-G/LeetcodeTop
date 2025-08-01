class Solution {
public:
    bool validate(TreeNode* root, long mini,long maxi){
        if(!root) return true;
        if(root->val <= mini || root->val >= maxi) return false;
        return validate(root->left,mini,root->val) && validate(root->right,root->val,maxi);
        
    }

    bool isValidBST(TreeNode* root) {
        return validate(root, LONG_MIN, LONG_MAX);
    }
};
