class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size()-1;
        int col = matrix[0].size()-1;
        
        if(matrix.size()==0 || matrix[0].size()==0)
            return false;
        
        if(target>matrix[row][col] || target<matrix[0][0])
            return false;
        
        int x=0;
        int y = col;
        while(x<= row && y>=0)
        {
            if(target == matrix[x][y])
                return true;
            else if(target<matrix[x][y])
            {
                y--;
            }
            else
            {
                x++;
            }
        }
            return false;
    }
};
