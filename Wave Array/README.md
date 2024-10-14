# Wave Sort an Array

## Problem Statement

Given a sorted array `arr[]` of distinct integers, the task is to sort the array into a wave-like array **in place**. In a wave array, elements are arranged such that:

- `arr[1] >= arr[2] <= arr[3] >= arr[4] <= arr[5] ...`

If there are multiple solutions, return the lexicographically smallest one.

### Example 1

**Input:**  
`n = 5, arr[] = {1, 2, 3, 4, 5}`  
**Output:**  
`2 1 4 3 5`  
**Explanation:**  
After sorting in waveform, the elements of the array are `2 1 4 3 5`.

---

### Example 2

**Input:**  
`n = 6, arr[] = {2, 4, 7, 8, 9, 10}`  
**Output:**  
`4 2 8 7 10 9`  
**Explanation:**  
After sorting in waveform, the elements of the array are `4 2 8 7 10 9`.

---

## Expected Time and Space Complexity

- **Time Complexity:** O(n)
- **Auxiliary Space:** O(1)

### Constraints

- `1 ≤ n ≤ 10^6`
- `0 ≤ arr[i] ≤ 10^7`