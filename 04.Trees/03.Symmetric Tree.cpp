class Solution {
public:
    bool isMirror(TreeNode* p, TreeNode* q){
        if(p==NULL||q==NULL) return p==q;
        return(p->val==q->val
               && isMirror(p->left,q->right)
               && isMirror(p->right,q->left));
    }
    bool isSymmetric(TreeNode* root) {
        if(root==nullptr) return true;

        return isMirror(root->left,root->right);
    }
};
