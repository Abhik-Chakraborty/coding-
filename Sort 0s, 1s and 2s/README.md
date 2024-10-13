# Sort an Array of 0s, 1s, and 2s

## Problem Statement

Given an array `arr` containing only `0`s, `1`s, and `2`s, sort the array in ascending order. The array should be sorted such that all `0`s come first, followed by all `1`s, and then all `2`s.

### Examples

**Example 1:**  
**Input:**  
`arr[] = [0, 2, 1, 2, 0]`  
**Output:**  
`0 0 1 2 2`  
**Explanation:**  
The array is sorted such that all `0`s, `1`s, and `2`s are segregated in ascending order.

---

**Example 2:**  
**Input:**  
`arr[] = [0, 1, 0]`  
**Output:**  
`0 0 1`  
**Explanation:**  
The array is sorted such that all `0`s, `1`s, and `2`s are segregated in ascending order.

---

### Expected Time Complexity
- O(n)

### Expected Auxiliary Space
- O(1)

### Constraints
- `1 ≤ arr.size() ≤ 10^6`
- `0 ≤ arr[i] ≤ 2`