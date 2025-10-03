class Solution {
public:
    int finalPositionOfSnake(int n, vector<string>& commands) {
        int t=0;
        for(auto& s:commands)
        {
            switch(s[0])
            {
                case 'U':
                t-=n;
                break;
                case 'D':
                t+=n;
                break;
                case 'R':
                t++;
                break;
                case 'L':
                t--;
                break;
            }
        }
        return t;
    }
};