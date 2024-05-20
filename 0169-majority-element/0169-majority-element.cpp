class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
 int maxElemCount = 0;
 int elemCount = 0;
 int elem = *min_element(nums.begin(), nums.end());
 int k = 0;
 for (auto i = 0; i < nums.size(); i ++) {
   if (nums[i] != elem) {
     elemCount = 1;
     elem = nums[i];
   } else {
     elemCount++;
   }
   
   if (elemCount > maxElemCount) {
     maxElemCount = elemCount;
     k = nums[i];
   }
 }
 
 return k;
    }
};