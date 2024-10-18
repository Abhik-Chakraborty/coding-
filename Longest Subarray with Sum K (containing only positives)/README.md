# Longest Subarray with Sum K 

## Problem Statement

Given an array of positive integers and a target sum `k`, your task is to find the length of the longest subarray that sums up to `k`. If no such subarray exists, return `0`.

### Example 1

**Input:**

- `N = 3`
- `k = 5`
- `array[] = {2, 3, 5}`

**Output:**  
`2`

**Explanation:**  
The longest subarray with sum 5 is `{2, 3}`. Its length is `2`.

---

### Example 2

**Input:**

- `N = 5`
- `k = 10`
- `array[] = {2, 3, 5, 1, 9}`

**Output:**  
`3`

**Explanation:**  
The longest subarray with sum 10 is `{2, 3, 5}`. Its length is `3`.

---

## Approach

This problem can be efficiently solved using a two-pointer (or sliding window) approach since the array contains only positive integers. The main idea is to maintain a sliding window of elements that sums up to the target sum `k`. The algorithm iterates through the array, expanding the window when the sum is smaller than `k` and shrinking it when the sum exceeds `k`. 

### Steps:
1. **Initialize Variables:** Start with two pointers `start` and `end` at the beginning of the array and a variable `current_sum` to keep track of the sum of the elements in the window.
2. **Expand the Window:** Add elements to the window by increasing the `end` pointer and update `current_sum`.
3. **Shrink the Window:** If `current_sum` exceeds `k`, move the `start` pointer to reduce the window size while updating `current_sum`.
4. **Check for Sum:** If the `current_sum` matches `k`, calculate the length of the current window and update the maximum length.
5. **Continue the Process:** Repeat this until the `end` pointer has traversed the entire array.

### Time Complexity

- **Time Complexity:** O(N), where `N` is the number of elements in the array. Each element is processed at most twice (once when added to the window and once when removed).
- **Space Complexity:** O(1), since we are using a fixed amount of extra space.
