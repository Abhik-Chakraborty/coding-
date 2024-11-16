class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {

        int n = nums.size();
        int majorityElement1 = -1;
        int majorityElement2 = -1;
        int count1 = 0;
        int count2 = 0;

        for(int i = 0; i < n; i++){
            if(nums[i] == majorityElement1){
                count1++;
            }
            else if(nums[i] == majorityElement2){
                count2++;
            }
            else if(count1 == 0){
                majorityElement1 = nums[i];
                count1 = 1;
                
            }
            else if(count2 == 0){
                majorityElement2 = nums[i];
                count2 = 1; 
            }
            else {
                count1--;
                count2--;
            }
        }
        count1 = 0;
        count2 = 0; 

        for(int i = 0; i < n; i++){
            if(nums[i] == majorityElement1){
                count1++;
            } 
            else if (nums[i] == majorityElement2){
                count2++;
            } 
        }

        vector<int> result;
        if(count1 > n/3) result.push_back(majorityElement1);
        if(count2 > n/3) result.push_back(majorityElement2);
        return result;
    }
};