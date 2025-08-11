class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n<=0) return false;
        if((n & (n-1))!=0) return false;
        int bits = (log2(n) + 1);
        return (bits%2 != 0); 
    }
};