class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) 
    {
        int iOneCount = 0;
        int iMax = 0;

        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] == 1)
            {
                iOneCount++;
                iMax = max(iOneCount, iMax);
            }
            else
            {
                iOneCount = 0;
            }
        }

        return iMax;
        
    }
};