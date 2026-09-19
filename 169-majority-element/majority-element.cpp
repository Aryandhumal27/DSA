class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        int iElement = 0;
        int iCnt = 0;

        for(int i = 0; i < nums.size(); i++)
        {
            if(iCnt == 0)
            {
                iElement = nums[i];
                iCnt++;
            }
            else if(nums[i] == iElement)
            {
                iCnt++;
            }
            else
            {
                iCnt--;
            }
        }

        return iElement;
    }
};