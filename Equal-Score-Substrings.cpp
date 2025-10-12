class Solution {
public:
    bool scoreBalance(string s) {
        int temp=0;
        for(auto it:s) temp+=it-'a'+1;
        int res=0;
        for(auto it:s)
        {
            res+=it-'a'+1;
            if((2*res)==temp) return true;
        }
        return false;
    }
};