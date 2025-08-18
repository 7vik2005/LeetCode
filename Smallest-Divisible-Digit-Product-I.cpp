class Solution {
public:
    int smallestNumber(int n, int t) {
       for(int i=n;i<=n+10;i++)
       {
            int temp=product(i);
            if(temp%t==0) return i;
       } 
       return -1;
    }
    int product(int n)
    {
        int p=1;
        while(n>0)
        {
            p*=(n%10);
            n/=10;
        }
        return p;
    }
};