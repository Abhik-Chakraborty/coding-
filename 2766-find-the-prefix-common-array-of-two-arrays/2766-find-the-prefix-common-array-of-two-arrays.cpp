class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
       int n = A.size();
        vector<int> C(n, 0);  
        
        set<int> seenA, seenB;

        for (int i = 0; i < n; ++i) {
            seenA.insert(A[i]);  
            seenB.insert(B[i]);  
            
            int count = 0;
            for (int x : seenA) {
                if (seenB.count(x) > 0) {
                    count++;
                }
            }
            
            C[i] = count;  
        }

        return C; 
    }
};