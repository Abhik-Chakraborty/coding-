#include<bits/stdc++.h>
using namespace std;

string expandString(const string& s) {
    string result;

    for (int i = 0; i < s.size(); i++) {
        if (isdigit(s[i])) { // Check if the character is a digit
            int repeatCount = s[i] - '0'; // Convert character digit to integer
            result += string(repeatCount, '1'); // Append '1' repeatCount times
        } else {
            result += s[i]; // Append non-digit characters as is
        }
    }

    return result;
}

int main() {
    string s = "abc5bc3";
    cout << "Output: " << expandString(s) << endl;
    return 0;
}
