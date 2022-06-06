// NOT RUNNING FOR ALL TEST CASES

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
        int col0=1,row0=1, rows=matrix.size(), col=matrix[0].size();
        //imt col0 is used to correctly set the value [0][0]
        
        
        //make the first row and column of the matrix to use as dummy matrix 
        for(int i=0;i<rows;i++){
            if(matrix[i][0] == 0) 
                col0=0;
            for(int j=1;j<col;j++){
                if(matrix[i][j]==0)
                    matrix[i][0]=matrix[0][j]=0;
                if(j == 0 && matrix[i][j] == 0) col0 = 1;
                if(i == 0 && matrix[i][j] == 0) row0 = 1;
            }
        }
        
        //back traverse the array to set the values to 0
        for(int i=rows-1; i>=0;i--){
            for(int j=col-1 ;j>=1;j--){
                if(matrix[i][0]==0 || matrix[0][j]==0)
                    matrix[i][j]=0;
                if(col0==0)
                    matrix[i][0]=0;
                // if(row0==0)
                //     matrix[0][j]=0;
            }
        }
        
        if(row0==0)
            for(int j = 0; j < col; j++)
                matrix[0][j] = 0;
        if(col0==0)
            for(int i = 0; i < rows; i++)
                matrix[i][0] = 0;
        
    }
};
