/* https://leetcode.com/problems/average-salary-excluding-the-minimum-and-maximum-salary/description/ */


class Solution {
public:
    double average(vector<int>& salary) {
        int n = salary.size();
        sort(salary.begin(), salary.end());
        double sum = accumulate(salary.begin(), salary.end(), 0.0);
        sum -= salary[0];
        sum -= salary[n - 1];
        return sum / (n - 2);
    }
};
