/*Question: https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/536/week-3-may-15th-may-21st/3334/
Question: Online Stock Span

Time Complexity: O(Q) where Q is number of calls to StockSpanner.next
Space Complexity: O(Q)
*/

class StockSpanner {

private:
    stack<pair<int,int>> stock;
public:
    StockSpanner() {
        
    }
    
    int next(int price) {
        int res=1;
        while(!stock.empty() && stock.top().first <= price){
            res += stock.top().second;
            stock.pop();
        }
        stock.push({price, res});
        return res;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */
