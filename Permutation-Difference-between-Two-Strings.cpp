class Solution {
public:
    int findPermutationDifference(string s, string t) {
        unordered_map<char, int> mpp;
        for(int i=0;i<s.length();i++)
        {
            mpp[s[i]]=i;
        }
        int ans=0;
        for(int i=0;i<t.length();i++)
        {
            ans+=abs(i-mpp[t[i]]);
        }
        return ans;
    }
};