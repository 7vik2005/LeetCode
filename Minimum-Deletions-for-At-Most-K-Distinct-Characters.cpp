class Solution {
public:
    int minDeletion(string s, int k) {
        int n=s.length();
        unordered_map<char, int> mpp;
        for(int i=0;i<n;i++)
        {
            mpp[s[i]]++;
        }
        if(mpp.size()<=k) return 0;
        vector<pair<char, int>> temp(mpp.begin(), mpp.end());
        sort(temp.begin(), temp.end(), [](pair<char, int>& a, pair<char, int>&b)
        {
            return a.second<b.second;
        });
        int ans=0;
        for(int i=0;i<(mpp.size()-k);i++)
        {
            ans+=temp[i].second;
        }
        return ans;
    }
};