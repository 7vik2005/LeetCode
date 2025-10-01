class Solution {
public:
    int maximumPrimeDifference(vector<int>& nums) {
        int start=0, end=nums.size()-1;
        for(;start<end;start++)
        {
            if(isprime(nums[start])) break;
        }
        for(;end>=start;end--) 
        {
            if(isprime(nums[end])) break;
        }
        return (end-start);
    }
    bool isprime(int n)
    {
        if(n<2) return false;
        for(int i=2;i*i<=n;i++)
        {
            if(n%i==0) return false;
        }
        return true;
    }
};