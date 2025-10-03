class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        if(nums.size()==1) return true;
        int count=0;
        for(int i=1;i<nums.size();i++)
        {
            int j=i-1;
            if((nums[i]%2==0 && nums[j]%2!=0) || (nums[i]%2!=0 && nums[j]%2==0)) count++;
        }
        if(count==nums.size()-1) return true;
        return false;
    }
};