class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 2;

        if(nums.size() == 1) {
            k = 1;
            return k;
        }

        for(int i = 2; i < nums.size(); i++){
            if(nums[i] != nums[k - 2]){
                nums[k] = nums[i];
                k++;
            }
        }
        return k;
    }
};