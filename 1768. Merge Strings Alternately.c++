/*https://leetcode.com/problems/merge-strings-alternately/description/ */


class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i=0,j=0;  
        string s="";  
        int n = word1.length();
        int m = word2.length();
        while(i < n || j < m){ 
            if(i<n)   s += word1[i++]; 
            if(j<m)   s += word2[j++]; 
        } 
        return s; 
    }
};


