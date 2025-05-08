#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
 vector<int> original;
  vector<int> current;
  mt19937 gen; 

    Solution(vector<int>& nums) {
        original = nums;
        current = nums;
    }
    
    vector<int> reset() {
        current = original;
        return current;
    }
    
    vector<int> shuffle() {
        // random_device rd;
        // mt19937 g(rd());
        // std::shuffle(current.begin(),current.end(),g);
        // return current;

        vector<int>res = current;
        std::shuffle(current.begin(),current.end(),gen);
        return res;
    }
};
