class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        sort(capacity.begin(), capacity.end());
        int count=0, sum=0;
        for(int i:apple)
        {
            sum+=i;
        }
        int x=capacity.size()-1;
        while(x>=0)
        {
            sum-=capacity[x];
            count++;
            if(sum<=0) break;
            x--;
        }
        return count;
    }
};