class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> set1(nums1.begin(),nums1.end());
        set<int> result;

        for(int i=0;i<nums2.size();i++){
            if(set1.count(nums2[i])){
                result.insert(nums2[i]);
            }
        }
        return vector<int>(result.begin(),result.end());
    }
};
