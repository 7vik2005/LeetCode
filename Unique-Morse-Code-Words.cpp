class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> s = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        set<string> st;
        string temp;
        for(string str:words)
        {
            temp="";
            for(char c:str)
            {
                temp+=s[c-'a'];
            }
            st.insert(temp);
        }
        return st.size();
    }
};