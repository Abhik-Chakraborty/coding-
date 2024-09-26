class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n; 

        // declare a temp arr/vector
        vector <int> temp(k);
        for(int i = 0; i < k; i++){
            temp[i] = nums[n - k + i];
        }

        //shifting 
        for(int i = n - 1; i >= k; i--){
           nums[i] =  nums[i - k];
        }

        //putting back from temp
        for(int i = 0; i < k; i++){
            nums[i] = temp[i];
        }
    }
};