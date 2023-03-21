/* https://leetcode.com/problems/number-of-zero-filled-subarrays/description/ */


#define ll long long
class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        ll ans = 0;
        int n = nums.size();
        ll count = 0;
         //do it in long long otherwise it wl give signed integer overflow error

         for(int i=0;i<n;i++){
             if(nums[i]==0){
                 count++;
             }
             //Length of subarray : (count(count+1))/2;
             else{
                 ans+=(count*(count+1)/2);
                 count = 0;
             }
         }
         if(count!=0){
             ans+=(count*(count+1)/2);
         }
         return ans;

        
    }
};
