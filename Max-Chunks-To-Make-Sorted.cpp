class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int running=0, expected=0, count=0;
        for(int i=0;i<arr.size();i++)
        {
            running+=arr[i];
            expected+=i;
            if(running==expected) count++;
        }
        return count;
    }
};