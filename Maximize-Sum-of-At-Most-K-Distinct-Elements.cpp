class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {
        sort(nums.rbegin(), nums.rend());
        vector<int> ans;
        ans.push_back(nums[0]);
        k--;
        int i=1;
        while(k>0 && i<nums.size())
        {
            if(nums[i]!=nums[i-1])
            {
                ans.push_back(nums[i]);
                k--;
            }
            i++;
        }       
        return ans; 
    }
};