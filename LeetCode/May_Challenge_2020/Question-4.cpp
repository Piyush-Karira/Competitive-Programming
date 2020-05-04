/*Question: https://leetcode.com/explore/featured/card/may-leetcoding-challenge/534/week-1-may-1st-may-7th/3319

Question-Tag: Number Complement

Time Complexity: O(1)
Space Complexity: O(1);
*/

class Solution {
public:
    int findComplement(int num) {
        unsigned mask = ~0;
        while (mask & num) {
           mask<<=1;
        }
        return num ^ ~mask;
    }
};
