class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>result;
        if(root==NULL) return result;

        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()){
            vector<int> currentlevel;
            int levelsize = q.size();

            for(int i=0;i<levelsize;i++){
                TreeNode* node = q.front();
                q.pop();
                currentlevel.push_back(node->val);
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);

            }
            result.push_back(currentlevel);
        }
        return result;
    }
};
