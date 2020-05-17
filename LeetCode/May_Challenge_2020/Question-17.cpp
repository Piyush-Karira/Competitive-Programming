/*Question: https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/536/week-3-may-15th-may-21st/3332
Question-Tag:  Find All Anagrams in a String

Time Complexity: O(N) N=26*size of string
Space Complexity: O(1)
*/

class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans, sc(26), pc(26);
        int n = s.length();
        int m = p.length();
        if(m>n)
            return ans;
        
        for(int i=0;i<m;i++){
            sc[s[i]-'a']++;
            pc[p[i]-'a']++;
        }
        
        if(sc == pc)
            ans.push_back(0);
        for(int i=m;i<n;i++){
            sc[s[i]-'a']++;
            sc[s[i-m]-'a']--;
            
            if(sc == pc)
                ans.push_back(i-m+1);
        }
        return ans;
    }
};
