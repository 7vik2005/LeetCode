class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_map<int, int> mpp;
        for(int n:nums)
        {
            mpp[n]++;
        }
        vector<int> ans;
        for(auto& x:mpp)
        {
            if(x.second==1) ans.push_back(x.first);
        }
        return ans;
    }
};