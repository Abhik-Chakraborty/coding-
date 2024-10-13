# Count Occurrences of X in a Sorted Array

## Problem Statement

Given a sorted array `Arr` of size `N` and a number `X`, find the number of occurrences of `X` in the array. If `X` is not present in the array, return `0`.

### Examples

**Example 1:**  
**Input:**  
`N = 7`, `X = 2`  
`Arr[] = {1, 1, 2, 2, 2, 2, 3}`  
**Output:**  
`4`  
**Explanation:**  
`X = 2` occurs `4` times in the given array, so the output is `4`.

---

**Example 2:**  
**Input:**  
`N = 7`, `X = 4`  
`Arr[] = {1, 1, 2, 2, 2, 2, 3}`  
**Output:**  
`0`  
**Explanation:**  
`X = 4` is not present in the given array, so the output is `0`.

---

### Expected Time Complexity
- O(logN) (This can be achieved using Binary Search)

### Expected Auxiliary Space
- O(1)

### Constraints
- `1 ≤ N ≤ 10^5`
- `1 ≤ Arr[i] ≤ 10^6`
- `1 ≤ X ≤ 10^6`