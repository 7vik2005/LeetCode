class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mpp;
        for(int n:nums)
        {
            mpp[n]++;
        }
        auto comp=[](pair<int, int>& a, pair<int, int>& b){
            return a.second<b.second;
        };
        priority_queue<pair<int, int>, vector<pair<int ,int>>, decltype(comp)> pq(comp);
        for(auto it:mpp)
        {
            pq.push({it.first, it.second});
        }
        vector<int> ans;
        while(k-- > 0)
        {
            ans.push_back(pq.top().first);
            pq.pop();
        }
        return ans;
    }
};