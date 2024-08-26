class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
    int n = nums.size();
       vector<int>leftSum(n+1, 0);
       vector<int> rightSum(n+1 , 0);
       vector<int>answer(n, 0);
       leftSum[0] = nums[0];
        for(int i = 1; i < n; ++i){
            leftSum[i] = leftSum[i - 1] + nums[i];
        }
        rightSum[n-1] = nums[n-1];
        for(int i = n - 2; i >= 0; --i){
            rightSum[i] = rightSum[i + 1] + nums[i];
        }
        for(int i = 0; i < n; ++i){
            answer[i] = abs(leftSum[i] - rightSum[i]);
        }
        
        return answer;
    }
};