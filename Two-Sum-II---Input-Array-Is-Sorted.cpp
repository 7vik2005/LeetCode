class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int, int> mpp;
        for (int i = 0; i < numbers.size(); i++) {
            int num = numbers[i];
            int moreNeeded = target - num;
            if (mpp.find(moreNeeded) != mpp.end()) {
                return {mpp[moreNeeded]+1, i+1};
            }
            mpp[num] = i;
        }
        return {-1, -1};
    }
};