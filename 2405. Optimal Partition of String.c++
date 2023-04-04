/* https://leetcode.com/problems/optimal-partition-of-string/description/ */

class Solution {
public:
    int partitionString(string s) {
        int ans = 1;

        set<char>se;

        for(auto c : s){
            if(se.find(c)!=se.end()){
                se.clear();
                ans++;
            }
            se.insert(c);
        }
        return ans;
        
    }
};
