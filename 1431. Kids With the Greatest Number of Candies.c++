/*https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/description/  */

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& cd, int ex) {
        int ans =0;
        vector<bool> res;
        for(int a : cd ) ans =max(ans,a);
        for(int a : cd){
            if(a+ex >= ans) res.push_back(true);
            else res.push_back(false);
        }
        return res;
    }
};
