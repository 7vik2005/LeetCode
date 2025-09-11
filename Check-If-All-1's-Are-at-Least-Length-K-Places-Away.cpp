class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int counter=0;
        int flag=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1 && flag==0) 
            {
                counter++;
                flag++;
            }
            else if(nums[i]==0 && flag==1) counter++;
            else if(nums[i]==1 && flag==1)
            {
                if(counter<=k)
                {
                    return false;
                }
                counter=1;
            }
        }
        return true;
    }
};