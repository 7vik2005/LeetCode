class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double curr=0, maxi=0;
        for(int i=0;i<k;i++)
        {
            curr+=nums[i];
        }
        maxi=curr;
        for(int i=k;i<nums.size();i++)
        {
            curr+=nums[i]-nums[i-k];
            maxi=max(maxi, curr);
        }
        return maxi/k;
    }
};