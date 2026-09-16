## Problem: Valid Parentheses (Easy-Medium)

**Link:** https://leetcode.com/problems/valid-parentheses/

### Approach

I used a stack to store opening brackets. Whenever a closing bracket appears, I check whether it matches the most recent opening bracket.

### Complexity

- Time: O(n)
- Space: O(n)

### Notes

The order of brackets is important. An empty stack at the end means all opening brackets were matched correctly.