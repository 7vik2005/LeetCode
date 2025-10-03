class Solution {
public:
    vector<int> minCosts(vector<int>& cost) {
        vector<int> ans;
        int mini=INT_MAX;
        for(int i=0;i<cost.size();i++)
        {
            mini=min(mini, cost[i]);
            ans.push_back(mini);
        }
        return ans;
    }
};