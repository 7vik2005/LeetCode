class Solution {
public:
    string sortSentence(string s) {
        string ans;
        vector<string> temp(10);
        string word;
        for(int i=0;i<s.length();i++)
        {
            if(isdigit(s[i]))
            {
                temp[s[i]-'0']=word+" ";
                word="";
                i++;
            }
            else
            {
                word+=s[i];
            }
        }
        for(auto& str:temp)
        {
            ans+=str;
        }
        ans.pop_back();
        return ans;
    }
};