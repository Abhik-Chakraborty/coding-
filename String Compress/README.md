# String Compression

## Problem Description

You are given a string `S` and need to implement a function to perform basic string compression using the counts of repeated characters.

- If the "compressed" string would not become smaller than the original string, your function should return the original string.
- You can assume the string contains only uppercase and lowercase letters (a-z).

---

## Input Format

A single line containing the string `S`.

---

## Output Format

A single line representing the compressed string as specified in the problem.

---

## Constraints

- \(1 \leq \text{length}(S) \leq 100,000\)

---

## Example

### Sample Input 1
aabccccc


### Sample Output 1
a2b1c5


## Explanation

In the input string:
- The character `'a'` repeats 2 times.
- The character `'b'` repeats 1 time.
- The character `'c'` repeats 5 times.

Thus, the compressed string is `a2b1c5`.

If the compressed string is not shorter than the original string, the original string is returned.

---

## Notes

1. This problem requires an efficient solution to handle large input sizes within the given constraints.
2. Be mindful of edge cases like strings with no repeating characters or all characters being the same.
