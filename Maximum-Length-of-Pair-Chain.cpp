class Solution {
public:
    int findLongestChain(vector<vector<int>>& pairs) {
        sort(pairs.begin(), pairs.end(), [](const vector<int>& a, const vector<int>& b){
            return a[1]<b[1];
        });
        int curr=INT_MIN, ans=0;
        for(const auto& it:pairs)
        {
            if(curr<it[0])
            {
                curr=it[1];
                ans++;
            }
        }
        return ans;
    }
};