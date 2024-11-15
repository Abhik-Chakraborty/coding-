function compressString(S) {
    let compressed = ""; // To store the compressed version of the string
    let count = 1; // Initialize count for the first character

    for (let i = 1; i < S.length; i++) {
        if (S[i] === S[i - 1]) {
            count++; // Increment count if current character is the same as the previous
        } else {
            // Append the previous character and its count
            compressed += S[i - 1] + count;
            count = 1; // Reset count for the new character
        }
    }

    // Append the last character and its count
    compressed += S[S.length - 1] + count;

    // Return the shorter string
    return compressed.length < S.length ? compressed : S;
}

// Example usage
const input = "aabccccc";
console.log(compressString(input)); // Output: "a2b1c5"