class Solution {
    public int uniquePaths(int m, int n) {
        
        int [][]dptable = new int[m][n];
        
        for( int i=0;i < n;i++ ){
            dptable[0][i] = 1; 
        }
        for( int j=1;j < m;j++ ){
            dptable[j][0] = 1;
        }
        
        for( int i=1;i < m ;i++){
            for( int j=1;j < n ;j++){
                dptable[i][j] = dptable[i][j-1] + dptable[i-1][j];
            }
        }
        
        return dptable[m-1][n-1];
        
    }
}
