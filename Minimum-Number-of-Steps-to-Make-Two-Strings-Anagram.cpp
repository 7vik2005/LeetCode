class Solution {
public:
    int minSteps(string s, string t) {
        vector<int> mpps(26, 0);
        vector<int> mppt(26, 0);
        for(auto& it:s) mpps[it-'a']++;
        for(auto& it:t) mppt[it-'a']++;
        int ans=0;
        for(int i=0;i<26;i++)
        {
            ans+=abs(mpps[i]-mppt[i]);
        }
        return ans/2;
    }
};