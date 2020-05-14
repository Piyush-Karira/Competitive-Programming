/*Question: https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/535/week-2-may-8th-may-14th/3328
Question-Tag: Remove K Digits

Time Complexity: O(N)
Space Complexity: O(N)*/

class Solution {
public:
    string removeKdigits(string num, int k) {
        if (k == num.size()) {
            return "0";
        }
        stack<char> st;
        for (char c : num) {
            while (k && !st.empty() && st.top() > c) {
                st.pop();
                k--;
            }
            st.push(c);
        }
        while (k) {
            st.pop();
            k--;
        }
        string ans;
        while (!st.empty()) {
            ans = st.top() + ans;
            st.pop();
        }
        while (ans.size() > 1 && ans[0] == '0') {
            ans.erase(ans.begin());
        }
        return ans;
    }
};
