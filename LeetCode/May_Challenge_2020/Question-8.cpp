/*Question: https://leetcode.com/explore/featured/card/may-leetcoding-challenge/535/week-2-may-8th-may-14th/3323
Questino-Tag:  Check If It Is a Straight Line

Time Complexity: O(n)
Space Complexity: O(1)
*/

class Solution {
    
public:
    bool checkStraightLine(vector<vector<int>>& C) {
         if(C.size()==2)
            return true;
        
        for(int i=2;i<C.size();i++){
            if((C[i][1] - C[1][1])* (C[1][0]-C[0][0]) != (C[i][0] - C[1][0])* (C[1][1]-C[0][1]))
                return false;
        }
        
        return true;
    }
};
