class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        set<int> s1, s2, s3;
        for(auto it:nums1) s1.insert(it);
        for(auto it:nums2) s2.insert(it);
        for(auto it:nums3) s3.insert(it);
        unordered_map<int, int> mpp;
        for(auto it:s1) mpp[it]++;
        for(auto it:s2) mpp[it]++;
        for(auto it:s3) mpp[it]++;
        vector<int> ans;
        for(auto it:mpp)
        {
            if(it.second>=2) ans.push_back(it.first);
        }
        return ans;
    }
};