class Solution {
public:
    TreeNode* BuildBST(vector<int>& nums,int left,int right){
        if(left>right) return nullptr;
        int mid = left + (right-left)/2;
        TreeNode* node = new TreeNode(nums[mid]);

        node->left = BuildBST(nums,left,mid-1);
        node->right = BuildBST(nums,mid+1,right);

        return node;
    }

    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return BuildBST(nums,0,nums.size()-1);
    }
};
