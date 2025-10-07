class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int ans=0;
        bool flag=true;
        for(int x:nums)
        {
            ans^=x;
            if(x!=0) flag=false;
        }
        if(flag) return 0;
        return ans!=0?nums.size():nums.size()-1;
    }
};