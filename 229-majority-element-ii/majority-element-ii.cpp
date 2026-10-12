class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) 
    {
        int n = nums.size();
        int validCount = n / 3;

        sort(nums.begin(), nums.end());

        vector<int> result;

        int currEle = nums[0];
        int iCount = 0;
        bool isInsert = false;

        for(int i = 0; i < n; i++)
        {
            if(nums[i] == currEle)
            {
                iCount++;

                if(iCount > validCount && isInsert == false)
                {
                    result.push_back(nums[i]);
                    isInsert = true;
                }                
            }
            else
            {   
                isInsert = false;
                currEle = nums[i];
                iCount = 1;

                if(iCount > validCount && isInsert == false)
                {
                    result.push_back(nums[i]);
                } 
            }
        }

        return result;        
    }
};