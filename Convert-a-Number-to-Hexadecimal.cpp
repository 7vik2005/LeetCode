class Solution {
public:
    string toHex(int num) {
        string ans="";
        unsigned int n=num;
        if(n==0) return "0";
        while(n)
        {
            int r=n%16;
            if(r==10 || r==11 || r==12 || r==13 || r==14 || r==15 || r==15)
            {
                char c=r+87;
                ans+=c;
            }
            else
            {
                char c=r+'0';
                ans+=c;
            }
            n/=16;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};