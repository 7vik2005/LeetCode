class Solution {
public:
    int numberOfPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        int count=0;
        for(int i=0;i<nums2.size();i++)
        {
            int target=k*nums2[i];
            for(int j=0;j<nums1.size();j++)
            {
                if(nums1[j]%target==0) count++;
            }
        }
        return count;
    }
};