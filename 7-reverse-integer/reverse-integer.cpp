class Solution {
public:
    int reverse(int x) 
    {
        int iDigit = 0;
        long long iReverse = 0;

        while(x != 0)
        {
            iDigit = x % 10;
            iReverse = (iReverse * 10) + iDigit;
            x = x / 10;
        }

        if(iReverse > INT_MAX || iReverse < INT_MIN)
        {
            return 0;
        }

        return (int)iReverse;
    }
};