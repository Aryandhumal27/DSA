class Solution {
public:
    int maxSubArray(vector<int>& nums) 
    {
        int iSum = 0;
        int iMaxSum = INT_MIN;

        for(int i = 0; i < nums.size(); i++)
        {
            iSum = iSum + nums[i];

            iMaxSum = max(iMaxSum, iSum);

            if(iSum < 0) iSum = 0;
        }

        return iMaxSum;        
    }
};