# Find the Row with the Most 1s in a 2D Array

## Problem Statement

You are given a 2D array `arr[][]` consisting of only 1's and 0's, where each row is sorted in non-decreasing order. Your task is to find and return the index of the first row that contains the most number of 1's. If no such row exists, return `-1`.

- Note: The array uses **0-based indexing**.

### Examples

**Example 1:**  
**Input:**  
`arr[][] = [[0, 1, 1, 1], [0, 0, 1, 1], [1, 1, 1, 1], [0, 0, 0, 0]]`  
**Output:**  
`2`  
**Explanation:**  
Row 2 contains 4 1's, which is the maximum number of 1's compared to other rows.

---

**Example 2:**  
**Input:**  
`arr[][] = [[0, 0], [1, 1]]`  
**Output:**  
`1`  
**Explanation:**  
Row 1 contains 2 1's, which is the maximum number of 1's in the given array.

---

### Expected Time Complexity
- O(n + m), where `n` is the number of rows and `m` is the number of columns.

### Expected Auxiliary Space
- O(1)

### Constraints
- `1 ≤ number of rows, number of columns ≤ 10^3`
- `0 ≤ arr[i][j] ≤ 1`