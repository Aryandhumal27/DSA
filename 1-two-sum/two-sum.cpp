class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        map<int, int> mpp;

        for(int i = 0; i < nums.size(); i++)
        {
            int num = nums[i];
            int Search = target - num;

            if(mpp.find(Search) != mpp.end())
            {
                return {mpp[Search], i};
            }

            mpp[num] = i;
        }

        return {-1, -1};
    }
};