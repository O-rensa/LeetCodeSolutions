class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 0;
  
    for (int i = 0; i < nums.size(); i++) {
        if (i == 0 || i == 1) {
            nums[i] == nums[i];
            k++;
        } else if (nums[i] != nums[k - 2]) {
            nums[k++] = nums[i];
        }
    }
  
    return k;
    
    };
};