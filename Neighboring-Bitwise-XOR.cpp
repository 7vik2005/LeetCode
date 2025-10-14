class Solution {
public:
    bool doesValidArrayExist(vector<int>& derived) {
        int a=accumulate(derived.begin(), derived.end(), 0);
        return a%2==0;
    }
};