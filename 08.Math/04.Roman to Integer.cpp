class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int> roman = {
             {'I', 1}, {'V', 5}, {'X', 10},
            {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}
        };
        int result = roman[s.back()];//stores last 
        for(int i=s.size()-2;i>=0;i--){
            if(roman[s[i]]<roman[s[i+1]]) result -=roman[s[i]]; // for IV we have sub 1 from 5 of the prev
            else result+=roman[s[i]];
        }
    return result;
    }
};
