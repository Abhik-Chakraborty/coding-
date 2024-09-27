class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int size = nums.size();
        
        // iterate over the entire array and store the non zero element in a temporary array.
        vector<int> temp;
        for(int i = 0; i < size; i++){
            if(nums[i] != 0){
                temp.push_back(nums[i]);
            }
        }

        //Put all non zero number in front of the array
        int non_zero = temp.size();
        for(int i = 0; i < non_zero; i++){
            nums[i] = temp[i];
        }

        //fill the remaining places with zero
        for(int i = non_zero; i < size; i++){
            nums[i] = 0;
        }

    }
};