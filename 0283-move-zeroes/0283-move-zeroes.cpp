class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int size = nums.size();
        int j = -1;

        //find the first zero in the given array 
        for(int i = 0; i < size; i++){
            if(nums[i] == 0){
                j = i; // j store the index of i
                break;
            }
        }

        if(j == -1) return;//no zeros is found, no need to return anything 

        //i pointer will start from next of j, if i is having non element then it will swap wth j
        for(int i = j + 1; i < size; i++){
            if(nums[i] != 0){
                swap(nums[i], nums[j]);
                j++;
            }
        }
        
    }
};