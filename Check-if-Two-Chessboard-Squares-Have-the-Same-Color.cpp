class Solution {
public:
    bool checkTwoChessboards(string coordinate1, string coordinate2) {
        int alpha1 = coordinate1[0] - 'a';      
        int alpha2 = coordinate2[0] - 'a';       
        int num1 = coordinate1[1] - '1';         
        int num2 = coordinate2[1] - '1';         
        int color1 = 0;
        int color2 = 0;
        if (alpha1 % 2 == num1 % 2) color1 = 1;
        if (alpha2 % 2 == num2 % 2) color2 = 1;
        return (color1 == color2);
    }
};