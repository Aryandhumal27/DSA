class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) 
    {
        int n = nums.size();
        vector<vector<int>> ans;

        if(n < 4)
        {
            return ans;
        }

        sort(nums.begin(), nums.end());

        int i = 0;
        while(i < n)
        {
            int j = i + 1;
            while( j < n)
            {
                int k = j + 1;
                int l = n - 1;

                while(k < l)
                {
                    long long iSum = nums[i] + nums[j];
                    iSum = iSum + nums[k];
                    iSum = iSum + nums[l];

                    if(iSum == target)
                    {
                        ans.push_back({nums[i], nums[j], nums[k], nums[l]});
                        k++;
                        l--;

                        while(k < l && nums[k] == nums[k - 1])
                        {
                            k++;
                        }

                        while(k < l && nums[l] == nums[l + 1])
                        {
                            l--;
                        }
                    }
                    else if(iSum < target)
                    {
                        k++;
                    }
                    else
                    {
                        l--;
                    }

                    
                }

                j++;

                while( j < n && nums[j] == nums[j - 1])
                {
                    j++;
                }
            }

            i++;

            while(i < n && nums[i] == nums[i - 1])
            {
                i++;
            }
        } 

        return ans;
    }
};