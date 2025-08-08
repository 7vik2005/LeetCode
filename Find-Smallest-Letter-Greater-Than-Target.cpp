class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int start=0;
        int end=letters.size()-1;
        char mini=target;
        bool flag=false;
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            if(letters[mid]>target)
            {
                flag=true;
                mini=letters[mid];
                end=mid-1;
            }
            else
            {
                start=mid+1;
            }
        }
        if(flag) return mini;
        return letters[0];
    }
};