class Solution {
public:
    vector<int> getRow(int rowIndex) 
    {
        int iRow = rowIndex + 1;
        long long ele = 1;
        vector<int> ans;

        ans.push_back(ele);

        for(int iCol = 1; iCol < iRow; iCol++)
        {
            ele = ele * (iRow - iCol);
            ele = ele / iCol;
            ans.push_back((int)ele);
        }

        return ans;
    }
};