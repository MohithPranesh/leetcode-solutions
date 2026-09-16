## Problem: Valid Anagram (Easy)

**Link:** https://leetcode.com/problems/valid-anagram/

### Approach

I used a frequency array of size 26 to count the occurrences of each lowercase letter in the first string. Then I decreased the counts using the second string; if all counts become zero, the strings are anagrams.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

The frequency array works efficiently for lowercase English letters. Both strings must contain the same number of each character.