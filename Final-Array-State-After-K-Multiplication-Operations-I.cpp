class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        vector<int>temp;
        for(int i=0;i<k;i++)
        {
            temp=nums;
            sort(temp.begin(),temp.end());
            int a=temp[0];
            for(int j=0;j<nums.size();j++)
            {
                if(a==nums[j])
                {
                    nums[j]=a*multiplier;
                    break;
                }
            }
        }
        return nums;
    }
};