class Solution {
public:
    bool squareIsWhite(string coordinates) {
        char s1=coordinates[0];
        char s2=coordinates[1];
        if(s1=='a' || s1=='c' || s1=='e' || s1=='g')
        {
            if(s2=='1' || s2=='3' || s2=='5' || s2=='7') return false;
            else return true;
        }
        else
        {
            if(s2=='1' || s2=='3' || s2=='5' || s2=='7') return true;
            else return false;
        }
        return false;
    }
};