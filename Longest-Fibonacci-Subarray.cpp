class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int ans=2, temp=2;
        for(int i=2;i<nums.size();i++)
        {
            if(nums[i]==nums[i-1]+nums[i-2]) temp++;
            else temp=2;
            ans=max(ans, temp);
        }
        return ans;
    }
};