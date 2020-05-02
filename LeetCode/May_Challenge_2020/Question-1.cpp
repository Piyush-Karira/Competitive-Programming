/*Question: https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/534/week-1-may-1st-may-7th/3316/

Question-Tag:   First Bad Version


Time Complexity: O(logn)
Space Ccomplexity: O(1)
*/


// Forward declaration of isBadVersion API.
bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int low=1,high=n,mid;
        while(low<high){
            mid = low + (high-low)/2;
            if(isBadVersion(mid)==true)
                high=mid;
            else
                low=mid+1;
        }
        return low;
    }
};
