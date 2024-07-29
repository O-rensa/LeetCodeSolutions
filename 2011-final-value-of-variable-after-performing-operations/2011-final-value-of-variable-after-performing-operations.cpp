class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x = 0;
        int n = operations.size();
        for(int i=0;i<n;i++)
        {
            string s = operations[i];
            if(s.find('+') != string::npos)
            {
                x++;
            }
            else
            {
                x--;
            }
        }
        return x;
    }
};