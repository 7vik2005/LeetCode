class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int temp=k;
        for(int i:nums)
        {
            if(i==temp) temp+=k;
        }
        return temp;
    }
};