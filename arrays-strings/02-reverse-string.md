 ## Problem: Reverse a String (Easy)

**Link:** https://leetcode.com/problems/reverse-string/

### Approach

I used a loop starting from the last character of the string and printed each character in reverse order. This gives the reversed string without using another string.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

The loop starts from `n - 1` and continues until index `0`. The string length is found using `strlen()`.