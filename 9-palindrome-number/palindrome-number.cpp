class Solution {
public:
    bool isPalindrome(int iNo) 
    {
        int iDuplicate = iNo;
        int iDigit = 0;
        long long iReverse = 0;

        if(iNo < 0)
        {
            return false;
        }

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iReverse = (iReverse * 10) + iDigit;
            iNo = iNo / 10;
        }

        if(iReverse > INT_MAX || iReverse < INT_MIN)
        {
            return false;
        }

        if((int)iReverse == iDuplicate)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};