class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int area=0, diag=0;
        for(int i=0;i<dimensions.size();i++)
        {
            int l=dimensions[i][0];
            int w=dimensions[i][1];
            int curr=l*l+w*w;
            if(curr>diag || (curr==diag && l*w>area))
            {
                diag=curr;
                area=l*w;
            }
        }
        return area;
    }
};