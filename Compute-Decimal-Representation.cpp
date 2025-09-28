class Solution {
public:
    vector<int> decimalRepresentation(int n) {
        vector<int> ans;
        int i=0;
        while(n>0)
        {
            int temp=n%10;
            if(temp!=0)
            {
                int res=temp*(int)pow(10, i);
                ans.push_back(res);
            }
            n/=10;
            i++;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};