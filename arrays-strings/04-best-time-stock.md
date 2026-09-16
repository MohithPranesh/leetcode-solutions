## Problem: Best Time to Buy and Sell Stock (Easy)

**Link:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

### Approach

I kept track of the minimum price seen so far and calculated the profit by selling at each later price. I updated the maximum profit whenever a larger profit was found.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

The stock must be bought before it is sold. If no profit is possible, the maximum profit remains 0.s