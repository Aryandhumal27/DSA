class Solution {
public:
    vector<int> generateRow(int rowIndex)
    {
        int iRow = rowIndex + 1;
        vector<int> ans;
        int ele = 1;

        ans.push_back(ele);

        for(int iCol = 1; iCol < iRow; iCol++)
        {
            ele = ele * (iRow - iCol);
            ele = ele / iCol;
            ans.push_back(ele);
        }

        return ans;
    }

    vector<vector<int>> generate(int numRows) 
    {
        vector<vector<int>> PascalTriangle;

        for(int iRow = 0; iRow < numRows; iRow++)
        {
            PascalTriangle.push_back(generateRow(iRow));
        }

        return PascalTriangle;
    }
};