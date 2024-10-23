# Maximum Subarray Sum (Kadane's Algorithm)

## Problem Statement

Given an integer array `arr`, find the contiguous subarray (containing at least one number) that has the largest sum and return its sum along with printing the subarray.

### Examples

**Example 1:**  
**Input:**  
`arr = [-2, 1, -3, 4, -1, 2, 1, -5, 4]`  
**Output:**  
`6`  
**Explanation:**  
The subarray `[4, -1, 2, 1]` has the largest sum of `6`.

---

**Example 2:**  
**Input:**  
`arr = [1]`  
**Output:**  
`1`  
**Explanation:**  
The array contains only one element, which itself is the maximum sum.

---

## Approach

### Kadane's Algorithm

Kadane's Algorithm is an efficient method to solve the problem of finding the largest sum contiguous subarray in linear time O(n). It involves iterating through the array while keeping track of two values:
1. **Current Sum:** The sum of the current subarray.
2. **Maximum Sum:** The maximum sum encountered so far.