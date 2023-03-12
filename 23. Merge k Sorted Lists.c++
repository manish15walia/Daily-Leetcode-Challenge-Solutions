/* https://leetcode.com/problems/merge-k-sorted-lists/description/ */


class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int>ans;
        int n = lists.size();
        for(int i=0;i<n;i++){
            while(lists[i]){
            ans.push_back(lists[i]->val);
            lists[i]=lists[i]->next;
        }
        

    }
    sort(ans.rbegin(),ans.rend());
    ListNode* a = NULL;
    for(int i=0;i<ans.size();i++){
        a = new ListNode(ans[i],a);
    }
    return a;
    }
};
