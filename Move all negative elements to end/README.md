# Move All Negative Elements to End

## Problem Statement

Given an unsorted array `arr[]` containing both negative and positive integers, the task is to move all negative elements to the end of the array without changing the relative order of the positive and negative elements. This must be done **in-place** on the array, without using extra space for another array.

### Examples

**Example 1:**  
**Input:**  
`arr[] = [1, -1, 3, 2, -7, -5, 11, 6]`  
**Output:**  
`[1, 3, 2, 11, 6, -1, -7, -5]`  
**Explanation:**  
By performing the operation, we have moved all negative integers to the end of the array while keeping the order of positive and negative integers unchanged.

---

**Example 2:**  
**Input:**  
`arr[] = [-5, 7, -3, -4, 9, 10, -1, 11]`  
**Output:**  
`[7, 9, 10, 11, -5, -3, -4, -1]`  
**Explanation:**  
Similarly, negative integers are moved to the end, and positive integers are maintained at the beginning in the original order.

---

### Expected Time Complexity
- O(n)

### Expected Auxiliary Space
- O(n)

### Constraints
- `1 ≤ arr.size ≤ 10^6`
- `-10^9 ≤ arr[i] ≤ 10^9`