/*https://leetcode.com/problems/minimize-maximum-of-array/description/ */


class Solution {
public:
    int minimizeArrayValue(vector<int>& nums) {
        long long sum = 0;
        long long result = 0;
        int n = nums.size();
        for (int i = 0; i <n ; i++) {
            sum += nums[i];
            result = max(result, (sum + i) / (i + 1));
        }
        return (int) result;
    }
};
