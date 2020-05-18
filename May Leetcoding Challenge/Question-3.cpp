/*Question: https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/534/week-1-may-1st-may-7th/3318

Question-tag:   Ransom Note

Time Complexity: O(|magazine| + |ransomeNote|)
Space Complexity: O(magazine)
*/


class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        
        unordered_map<char,int> charCount;
        
        for(char c:magazine){
            charCount[c]++;
        }
        
        for(char c:ransomNote){
            if(--charCount[c]<0)
                return false;
        }
        return true;
        
    }
};
