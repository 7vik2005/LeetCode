class Solution {
public:
    int countSeniors(vector<string>& details) {
        int count=0;
        for(auto& x:details)
        {
            int temp=stoi(x.substr(11,2));
            if(temp>60) count++;
        }
        return count;
    }
};