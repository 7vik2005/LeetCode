class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long count=0, seen=0;
        for(int num:nums)
        {
            if(num==0) 
            {
                seen++;
                count+=seen;
            }
            else seen=0;
        }
        return count;
    }
};