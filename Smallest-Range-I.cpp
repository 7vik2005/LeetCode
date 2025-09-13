class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        int maxi=INT_MIN;
        int mini=INT_MAX;
        for(int i=0;i<nums.size();i++)
        {
            maxi=max(maxi, nums[i]);
            mini=min(mini, nums[i]);
        }
        int result=(maxi-k)-(mini+k);
        if(result>0) return result;
        return 0;
    }
};