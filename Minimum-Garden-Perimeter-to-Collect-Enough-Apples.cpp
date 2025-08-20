class Solution {
public:
    long long minimumPerimeter(long long neededApples) {
        long long count=0, sum=0;
        while(sum<neededApples)
        {
            count++;
            sum+=(12*count*count);
        }
        return 8*count;
    }
};