## Problem: Longest Common Prefix (Easy-Medium)

**Link:** https://leetcode.com/problems/longest-common-prefix/

### Approach

I compared characters at the same position across all strings, starting from the first string. I stopped as soon as a character differed or a string ended, leaving the common prefix.

### Complexity

- Time: O(n * m)
- Space: O(1)

### Notes

The common prefix can be empty if the first characters do not match. The comparison must stop when any string reaches its end.