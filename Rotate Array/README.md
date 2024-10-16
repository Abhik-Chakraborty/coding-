# Rotate Array to the Right by k Steps

## Problem Statement

Given an integer array `nums`, rotate the array to the right by `k` steps, where `k` is non-negative.

### Example 1

**Input:**  
`nums = [1, 2, 3, 4, 5, 6, 7], k = 3`  
**Output:**  
`[5, 6, 7, 1, 2, 3, 4]`  
**Explanation:**  
- Rotate 1 step to the right: `[7, 1, 2, 3, 4, 5, 6]`  
- Rotate 2 steps to the right: `[6, 7, 1, 2, 3, 4, 5]`  
- Rotate 3 steps to the right: `[5, 6, 7, 1, 2, 3, 4]`

---

### Example 2

**Input:**  
`nums = [-1, -100, 3, 99], k = 2`  
**Output:**  
`[3, 99, -1, -100]`  
**Explanation:**  
- Rotate 1 step to the right: `[99, -1, -100, 3]`  
- Rotate 2 steps to the right: `[3, 99, -1, -100]`

---

## Constraints

- `1 <= nums.length <= 10^5`
- `-2^31 <= nums[i] <= 2^31 - 1`
- `0 <= k <= 10^5`
