/* https://leetcode.com/problems/odd-string-difference/description/ */

class Solution {
public:
    string oddString(vector<string>& words) {

    vector<int>diff1,diff2;

    for(int i=1;i<words[0].size();i++){
        diff1.push_back(words[0][i]-words[0][i-1]);
    }

    for(int i=1;i<words[0].size();i++){
        diff2.push_back(words[1][i]-words[1][i-1]);
    } 

    if(diff2!=diff1){
        vector<int>diff;

        for(int i=1;i<words[0].size();i++){
            diff.push_back(words[2][i]-words[2][i-1]);
        }

        if(diff2==diff)
            return words[0];
        else
            return words[1];

        }

        else{
            for(auto s : words){
                vector<int>ans;
                for(int i=1;i<s.size();i++)
                    ans.push_back(s[i]-s[i-1]);
                
                if(ans!=diff1)
                    return s;
            }
        }
    
    return "";
    }
};
