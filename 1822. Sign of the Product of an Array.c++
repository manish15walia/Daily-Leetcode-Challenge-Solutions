/* https://leetcode.com/problems/sign-of-the-product-of-an-array/description/ */

class Solution {
public:
    int arraySign(vector<int>& a) {
        int cnt = 0;
        for(int i = 0; i < a.size(); i++) 
        {
            if(a[i] == 0) return 0;
            if(a[i] < 0) cnt++;
        }
        if(cnt%2)
            return -1;
        
        else
            return 1;
    }
};
