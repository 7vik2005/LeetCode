class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        unordered_map<int, int> mpp;
        int count=0;
        for(auto it:nums)
        {
            mpp[it]++;
            count=max(count, mpp[it]);
        }
        vector<vector<int>> ans(count);
        for(auto it:mpp)
        {
            int num=it.first;
            int freq=it.second;
            for(int i=0;i<freq;i++)
            {
                ans[i].push_back(num);
            }
        }
        return ans;
    }
};