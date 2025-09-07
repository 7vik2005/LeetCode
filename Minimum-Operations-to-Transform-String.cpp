class Solution {
public:
    int minOperations(string s) {
        int ans=0;
        for(char c:s)
        {
            ans=max(ans, ('a'+26-c)%26);
        }
        return ans;
    }
};