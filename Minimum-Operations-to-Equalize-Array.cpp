class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n=nums.size();
        bool flag=false;
        for(int i=1;i<n;i++)
        {
            if(nums[i]!=nums[0])
            {
                flag=true;
                break;
            }
        }
        if(flag) return 1;
        return 0;
    }
};