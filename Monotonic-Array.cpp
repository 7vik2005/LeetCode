class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return true;
        bool inc=false;
        bool dec=false;
        for(int i=0;i<n-1;i++)
        {
            if(nums[i]<nums[i+1]) inc=true;
            else if(nums[i]>nums[i+1]) dec=true;
            else if(inc && dec) return false;
        }
        if(inc && dec) return false;
        return true;
    }
};