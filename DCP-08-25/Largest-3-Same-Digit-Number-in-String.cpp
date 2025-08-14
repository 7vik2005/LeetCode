class Solution {
public:
    string largestGoodInteger(string num) {
        string str="";
        for(int i=2;i<num.length();i++)
        {
            if(num[i]==num[i-1] && num[i-1]==num[i-2])
            {
                string temp=string(3, num[i]);
                if(str.empty() || temp>str)
                {
                    str=temp;
                }
            }
        }
        return str;
    }
};