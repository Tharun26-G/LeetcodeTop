class Solution {
public:
    bool checkprime(int n) {
        if (n <= 1) return false; 
        if (n == 2) return true; 

        for (int i = 2; i*i <= n; i++) {
            if (n % i == 0) {
                return false; 
            }
        }
        return true; 
    }

    int countPrimes(int n) {
        int cnt = 0;
        for (int i = 2; i < n; i++) {
            if (checkprime(i)) { 
                cnt++;
            }
        } 
        return cnt;
    }
};
