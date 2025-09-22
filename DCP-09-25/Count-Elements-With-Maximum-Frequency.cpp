class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        vector<int> freq(101, 0);
        int maxi=0;
        for(auto it:nums)
        {
            freq[it]++;
            maxi=max(maxi, freq[it]);
        }
        int ans=0;
        for(int i=1;i<=100;i++)
        {
            if(freq[i]==maxi) ans+=freq[i];
        }
        return ans;
    }
};