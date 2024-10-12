# Find Duplicates in an Array

## Problem Statement

Given an array `arr` of size `n`, which contains elements in the range from `0` to `n-1`, find all the elements occurring more than once in the given array. Return the answer in ascending order. If no such elements are found, return a list containing `[-1]`.

### Examples

**Input:**  
`n = 4`, `arr[] = [0, 3, 1, 2]`  
**Output:**  
`-1`  
**Explanation:**  
There is no repeating element in the array. Therefore, the output is `-1`.

---

**Input:**  
`n = 5`, `arr[] = [2, 3, 1, 2, 3]`  
**Output:**  
`2 3`  
**Explanation:**  
`2` and `3` occur more than once in the given array.

---

### Expected Time Complexity
- O(n)

### Expected Auxiliary Space
- O(n)

### Constraints
- `1 <= n <= 10^5`
- `0 <= arr[i] <= 10^5`, for each valid `i`