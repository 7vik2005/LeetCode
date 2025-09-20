class Solution {
public:
    int countAsterisks(string s) {
        int n=s.length();
        int ans=0;
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='|') count++;
            else if(s[i]=='*' && count%2==0) ans++;
        }
        return ans;
    }
};