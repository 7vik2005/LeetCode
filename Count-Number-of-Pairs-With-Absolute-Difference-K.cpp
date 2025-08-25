class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        unordered_map<int, int> mpp;
        int ans=0;
        for(auto num:nums)
        {
            ans+=mpp[num-k]+mpp[num+k];
            mpp[num]++;
        }
        return ans;
    }
};