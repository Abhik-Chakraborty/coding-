class Solution {
public:
    int minimizeXor(int num1, int num2) {
        int num2SetBits = __builtin_popcount(num2);  
        int x = 0;
        int bitCount = 0;
        for (int i = 30; i >= 0; i--) {
            if ((num1 >> i) & 1) {
                if (bitCount < num2SetBits) {
                    x |= (1 << i);
                    bitCount++;
                }
            }
        }
        for (int i = 0; i <= 30 && bitCount < num2SetBits; i++) {
            if (!((x >> i) & 1)) {
                x |= (1 << i); 
                bitCount++;
            }
        }

        return x;
    }
};