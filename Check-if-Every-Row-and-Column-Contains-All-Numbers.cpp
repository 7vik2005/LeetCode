class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        int n=matrix.size();
        for(int r=0;r<n;r++)
        {
            vector<bool> seen(n+1, false);
            for(int c=0;c<n;c++)
            {
                int temp=matrix[r][c];
                if(seen[temp]) return false;
                seen[temp]=true;
            }
        }
        for(int c=0;c<n;c++)
        {
            vector<bool> seen(n+1, false);
            for(int r=0;r<n;r++)
            {
                int temp=matrix[r][c];
                if(seen[temp]) return false;
                seen[temp]=true;
            }
        }
        return true;
    }
};