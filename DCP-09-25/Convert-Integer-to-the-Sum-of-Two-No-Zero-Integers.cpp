class Solution {
public:
    bool nozero(int x){
        while(x){
            if(x % 10 == 0){
                return false;
            }
            x /= 10;
        }
        return true;
    }
    vector<int> getNoZeroIntegers(int n) {
        for(int i = 1; i < n; i++){
            if(nozero(i) && nozero(n - i)){
                return {i , n - i};
            }
        }
        return {};
    }
};