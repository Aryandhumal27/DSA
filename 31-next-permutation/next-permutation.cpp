class Solution {
public:
    void nextPermutation(vector<int>& nums) 
    {
        int n = nums.size();
        bool isSwap = false;

        

        if(n < 2)
        {
            return;
        }

        for(int i = n - 2; i >= 0; i--)
        {
            // if(nums[i + 1] < iMin)
            // {
            //     iMin = nums[i + 1];
            //     iMinIndex = i + 1;
            // }

            if(nums[i] < nums[i + 1])
            { 
                int iMin = INT_MAX;
                int iMinIndex = i + 1;
                for(int j = i + 1; j < n; j++)
                {
                    if(nums[i] < nums[j] && nums[j] < iMin)
                    {
                        iMin = nums[j];
                        iMinIndex = j;
                    }
                }

                swap(nums[i], nums[iMinIndex]);
                isSwap = true;
                sort(nums.begin() + (i + 1), nums.end());
                break;
            }
        }

        if(isSwap == false)
        {
            reverse(nums.begin(), nums.end());
        }
    }
};