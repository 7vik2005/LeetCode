class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int ans=0;
        for(int i=low;i<=high;i++)
        {
            string str=to_string(i);
            int len=str.length();
            if(len%2!=0) continue;
            int left=0, right=0;
            int n=len/2;
            for(int i=0;i<n;i++)
            {
                left+=str[i]-'0';
            }
            for(int i=n;i<len;i++)
            {
                right+=str[i]-'0';
            }
            if(right==left) ans++;
        }
        return ans;
    }
};