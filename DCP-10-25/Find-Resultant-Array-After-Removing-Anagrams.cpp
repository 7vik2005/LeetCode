class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        vector<unordered_map<char, int>> mpp(words.size());
        for(int i=0;i<words.size();i++)
        {
            for(auto it:words[i]) mpp[i][it]++;
        }
        vector<string> ans;
        ans.push_back(words[0]);
        for(int i=1;i<words.size();i++)
        {
            if(mpp[i]!=mpp[i-1]) ans.push_back(words[i]);
        }
        return ans;
    }
};