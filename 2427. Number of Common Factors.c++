/* https://leetcode.com/problems/number-of-common-factors/description/*/

class Solution {
public:
    int commonFactors(int a, int b) {
        int n = min(a, b), count = 0;
        for(int i=1; i <= n; i++) {
            if(a % i == 0 and b % i == 0) count++; 
        }
        return count;
    }
};
