class Solution{
public:
    int isValid(vector<vector<int>> mat){
        // code here
        int row[9][9],col[9][9],grid[3][3][9];
        memset(row,0,sizeof(row));
        memset(col,0,sizeof(col));
        memset(grid,0,sizeof(grid));
        
        for(int i=0;i<9;i++)
            for(int j=0;j<9;j++)
                {
                   if(mat[i][j]>0){
                     int no=mat[i][j]-1;
                     if(row[i][no])
                        return 0;
                     row[i][no]=1;
                     
                     if(col[j][no])
                        return 0;
                     col[j][no]=1;
                     
                     if(grid[i/3][j/3][no])
                        return 0;
                     grid[i/3][j/3][no]=1;
                     
                   }    
                    
                }
        return 1;        
    }        
};