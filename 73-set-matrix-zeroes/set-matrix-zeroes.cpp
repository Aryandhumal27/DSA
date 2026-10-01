class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) 
    {
        int iRowSize = matrix.size();
        int iColSize = matrix[0].size();

        int iCol0 = -1;

        for(int iRow = 0; iRow < iRowSize; iRow++)
        {
            for(int iCol = 0; iCol < iColSize; iCol++)
            {
                if(matrix[iRow][iCol] == 0)
                {
                    matrix[iRow][0] = 0;  
                    
                    if(iCol != 0)
                    {
                        matrix[0][iCol] = 0;
                    }
                    else
                    {
                        iCol0 = 0;
                    }   
                }
            }
        }

        for(int iRow = 1; iRow < iRowSize; iRow++)
        {
            for(int iCol = 1; iCol < iColSize; iCol++)
            {
                if(matrix[0][iCol] == 0 || matrix[iRow][0] == 0)
                {
                    matrix[iRow][iCol] = 0;
                }
            }
        }

        for(int iCol = 0; iCol < iColSize; iCol++)
        {
            if(matrix[0][0] == 0)
            {
                matrix[0][iCol] = 0;
            }
        }

        for(int iRow = 0; iRow < iRowSize; iRow++)
        {
            if(iCol0 == 0)
            {
                matrix[iRow][0] = 0;
            }
        }

    }
};