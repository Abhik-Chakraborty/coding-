# Majority Element in an Array

## Problem Statement

Given an array `arr`, the task is to find the majority element in the array. If no majority element exists, return `-1`.

A **majority element** in an array is defined as an element that appears **strictly more than** `arr.size()/2` times in the array.

### Examples

**Example 1:**  
**Input:**  
`arr[] = [3, 1, 3, 3, 2]`  
**Output:**  
`3`  
**Explanation:**  
Since 3 is present more than `n/2` times (where `n = 5`), it is the majority element.

---

**Example 2:**  
**Input:**  
`arr[] = [7]`  
**Output:**  
`7`  
**Explanation:**  
Since the array contains only one element, it automatically becomes the majority element.

---

**Example 3:**  
**Input:**  
`arr[] = [2, 13]`  
**Output:**  
`-1`  
**Explanation:**  
No element in the array appears more than `n/2` times. Thus, there is no majority element.

---

### Expected Time Complexity
- O(n)

### Expected Auxiliary Space
- O(1)

### Constraints
- `1 ≤ arr.size() ≤ 10^5`
- `0 ≤ arr[i] ≤ 10^5`