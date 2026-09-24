class Solution {
public:
    int smallestIndex(vector<int>& nums) 
    {
        for(int i = 0; i < nums.size(); i++)
        {
            int iNo = nums[i];
            int iDigit = 0;
            int iSum = 0;

            while(iNo > 0)
            {
                iDigit = iNo % 10;
                iSum = iSum + iDigit;
                iNo = iNo / 10;
            }

            if(iSum == i)
            {
                return i;
            }          
        }

        return -1;
    }
};