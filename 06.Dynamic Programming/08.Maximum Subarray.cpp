class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxsofar = nums[0];
        int maxendhere = nums[0];

        for(int i=1;i<nums.size();i++){
            maxendhere = max(nums[i],nums[i]+maxendhere);
            maxsofar = max(maxendhere,maxsofar);
        }
        return maxsofar;
    }
};
