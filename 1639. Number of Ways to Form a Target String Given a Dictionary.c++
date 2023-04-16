/* https://leetcode.com/problems/number-of-ways-to-form-a-target-string-given-a-dictionary/description/ */


class Solution {
public:
    int numWays(vector<string>& words, string target) {
        int m = target.size();
        int n = words[0].size();
        int t = words.size();
        vector<vector<long>> dp(m+1, vector<long>(n+1, 0));
        for (int j=0; j<=n; j++) {
            dp[0][j] = 1; 
        }
        vector<vector<int>> arr(n, vector<int>(26, 0));
        for (int i=0; i<n; i++) {
            for (int j=0; j<t; j++) {
                arr[i][(words[j][i]-'a')]++;
            }
        }
        for (int i=1; i<=m; i++) {
            for (int j=1; j<=n; j++) {
                dp[i][j] = (arr[j-1][target[i-1]-'a'] * dp[i-1][j-1]) % mod;
                dp[i][j] = (dp[i][j] +  dp[i][j-1]) % (mod);
            }
        }
        return dp[m][n];
    }
private:
    int mod = 1e9+7;
};
