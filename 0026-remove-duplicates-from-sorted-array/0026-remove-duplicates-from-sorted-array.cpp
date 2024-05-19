class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
          int k = 0;
  int p1 = 0;
  int p2 = 0;
  
  while (p2 < nums.size()) {
    while (p1 < nums.size()) {
      if (p1 == 0 && p2 == 0) {
        nums[p2++] = nums[p1++];
        k++;
      } else if (nums[p2 - 1] != nums[p1]){
        nums[p2++] = nums[p1++];
        k++;
      }  else {
        p1++;
      };
    }
    break;
  }
  
  return k;
    }
};