/* https://leetcode.com/problems/minimum-insertion-steps-to-make-a-string-palindrome/ */


class Solution {
public:
    int minInsertions(string s) {
        
        vector<int> dp(s.length());
        for (int i = s.length() - 2; i >= 0; i--) {
            int prev = 0;
            for (int j = i + 1; j < s.length(); j++) {
                int temp = dp[j];
                if (s[i] == s[j]) {
                    dp[j] = prev;
                } else {
                    dp[j] = min(dp[j], dp[j-1]) + 1;
                }
                prev = temp;
            }
        }
        return dp[s.length()-1];
    }
};
