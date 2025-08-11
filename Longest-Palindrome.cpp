class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<int, int> freq;
        int count=0;
        bool odd=false;
        for(char c:s)
        {
            freq[c]++;
        }
        for(auto& it:freq)
        {
            if(it.second%2==0)
            {
                count+=it.second;
            }
            else
            {
                count+=it.second-1;
                odd=true;
            }
        }
        if(odd) return count+1;
        return count;
    }
};