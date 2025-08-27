class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int sum=0;
        unordered_map<int, int> mpp;
        int n=nums.size();
        for(auto& num:nums)
        {
            mpp[num]++;
        }
        for(auto& x:mpp)
        {
            if(x.second==1) sum+=x.first;
        }
        return sum;
    }
};