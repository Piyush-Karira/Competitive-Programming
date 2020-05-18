/*
Question: https://leetcode.com/explore/featured/card/may-leetcoding-challenge/534/week-1-may-1st-may-7th/3321/
Question-Tag:   Majority Element

Time Complexity: O(n)
Space Complexity: O(1)
*/

class Solution {
public:
    int majorityElement(vector<int>& nums) {

           int m_num = nums[0], count=0;

           for(int num:nums){
		if(count==0)
		    m_num=num;
		if(num!=m_num)
		    count--;
		
		else count++;
            }

        return m_num;
                
    }
};
