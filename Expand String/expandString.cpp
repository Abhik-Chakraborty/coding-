#include<bits/stdc++.h>
using namespace std;

string expandString(const string& s) {
    string result;

    for (char c : s) {
        if (isdigit(c)) { // Check if the character is a digit
            int repeatCount = c - '0'; // Convert character digit to integer
            result += string(repeatCount, '1'); // Append '1' repeatCount times
        } else {
            result += c; // Append non-digit characters as is
        }
    }

    return result;
}

int main() {
    string s = "abc5bc3";
    cout << "Output: " << expandString(s) << endl;
    return 0;
}
