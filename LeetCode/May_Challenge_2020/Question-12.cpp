/*Question: https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/535/week-2-may-8th-may-14th/3327/
Question-Tag:   Single Element in a Sorted Array

Time Complexity: O(logN)
Space Complexity: O(1)
*/

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int low=0, high = nums.size()-1, mid;
	    while( low < high ) {
		mid = low + (high-low)/2;
		if( nums[mid] == nums[mid ^ 1] )
			low = mid + 1;
		else
			high = mid;
	    }
	return nums[low];
    }
};
