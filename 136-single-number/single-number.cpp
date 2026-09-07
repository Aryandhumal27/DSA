class Solution {
public:
    int singleNumber(vector<int>& nums) 
    {
        int iResult = 0;

        for(int i = 0; i < nums.size(); i++)
        {
            iResult = iResult ^ nums[i];
        }

        return iResult;
    }
};