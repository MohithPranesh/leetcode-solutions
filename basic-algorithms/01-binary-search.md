## Problem: Binary Search (Easy-Medium)

**Link:** https://leetcode.com/problems/binary-search/

### Approach

I used the binary search technique on the sorted array. I repeatedly checked the middle element and reduced the search range to either the left or right half.

### Complexity

- Time: O(log n)
- Space: O(1)

### Notes

Binary search works only when the array is sorted. If the target is not found, the program returns -1.