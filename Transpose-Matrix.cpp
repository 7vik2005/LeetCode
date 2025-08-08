class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<vector<int>> ans;
        for(int c=0;c<m;c++)
        {
            vector<int> temp;
            for(int r=0;r<n;r++)
            {
                temp.push_back(matrix[r][c]);
            }
            ans.push_back(temp);
        }
        return ans;
    }
};