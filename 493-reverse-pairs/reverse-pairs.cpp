class Solution {
public:
    void merge(vector<int>& nums, int iLeft, int iMid, int iRight)
    {
        vector<int> leftSide;
        vector<int> rightSide;

        for(int i = iLeft; i <= iMid; i++)
        {
            leftSide.push_back(nums[i]);
        }

        for(int i = iMid + 1; i <= iRight; i++)
        {
            rightSide.push_back(nums[i]);
        }

        int iLeftIndex = 0;
        int iRightIndex = 0;
        int Index = iLeft;

        while(iLeftIndex < leftSide.size() && iRightIndex < rightSide.size())
        {
            if(leftSide[iLeftIndex] <= rightSide[iRightIndex])
            {
                nums[Index] = leftSide[iLeftIndex];
                iLeftIndex++;
            }
            else
            {
                nums[Index] = rightSide[iRightIndex];
                iRightIndex++;
            }

            Index++;
        }

        while(iLeftIndex < leftSide.size())
        {
            nums[Index] = leftSide[iLeftIndex];
            iLeftIndex++;
            Index++;
        }

        while(iRightIndex < rightSide.size())
        {
            nums[Index] = rightSide[iRightIndex];
            iRightIndex++;
            Index++;
        }
    }

    long long int countPair(vector<int>& nums, int iLeft, int iMid, int iRight)
    {
        int iPairCount = 0;

        int j = iMid + 1;

        for(int i = iLeft; i <= iMid; i++)
        {
            while((j <= iRight) && (nums[i] > (2LL * nums[j])))
            {
                j++;
            }

            iPairCount += j - (iMid + 1);
        }

        return iPairCount;
    }

    long long int mergeSort(vector<int>& nums, int iLeft, int iRight)
    {
        if(iLeft >= iRight)
        {
            return 0;
        }

        long long int pairCount = 0;

        int iMid = (iLeft + iRight) / 2;

        pairCount += mergeSort(nums, iLeft, iMid);
        pairCount += mergeSort(nums, iMid + 1, iRight);

        pairCount += countPair(nums, iLeft, iMid, iRight);

        merge(nums, iLeft, iMid, iRight);

        return pairCount;
    }

    int reversePairs(vector<int>& nums) 
    {
        return (int)mergeSort(nums, 0, nums.size() - 1);
    }
};