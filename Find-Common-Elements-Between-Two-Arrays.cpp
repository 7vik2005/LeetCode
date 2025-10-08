class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        int ans1=0, ans2=0;
        vector<int> freq1(101, 0), freq2(101, 0);
        for(int x:nums1) freq1[x]++;
        for(int x:nums2) freq2[x]++;
        for(int x:nums2)
        {
            if(freq1[x]>0) ans1++;
        }
        for(int x:nums1)
        {
            if(freq2[x]>0) ans2++;
        }
        return {ans2, ans1};
    }
};