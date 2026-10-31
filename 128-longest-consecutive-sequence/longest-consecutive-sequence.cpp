class Solution {
public:
    int longestConsecutive(vector<int>& nums) 
    {
        int n = nums.size();
        if(n == 0) return 0;
        
        unordered_set<int> ust;
        int longest = 1;

        for(int i = 0; i < nums.size(); i++)
        {
            ust.insert(nums[i]);
        }

        for(auto it : ust)
        {
            if(ust.find(it - 1) == ust.end())
            {
                int iCnt = 1;
                int x = it;

                while(ust.find(x + 1) != ust.end())
                {
                    iCnt++;
                    x++;
                }

                longest = max(longest, iCnt);
            }
        }

        return longest;
    }
};