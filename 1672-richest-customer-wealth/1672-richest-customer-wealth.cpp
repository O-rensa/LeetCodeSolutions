class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
    int m=accounts.size();
    int n=accounts[0].size();
    int wealth=0;
    for(int i=0;i<m;i++)
    {
        int curr_wealth=0;
        for(int j=0;j<n;j++)
        {
            curr_wealth+=accounts[i][j];
        }
        wealth=max(curr_wealth,wealth);
    }
    return wealth;
    }   
};