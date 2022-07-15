class Solution {
    int dfs(vector<vector<int>>& grid,int i, int j){
            int r=grid.size();
        int c=grid[0].size();
        if(i<0 || i>=r || j<0 || j>=c || grid[i][j]!=1)
            return 0;
        grid[i][j]=0;
        return (1+ dfs(grid, i+1, j) +dfs(grid, i-1, j)+dfs(grid, i, j+1)+dfs(grid, i, j-1));
    }
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
       
        int mx=0;
        int r=grid.size();
        int c=grid[0].size();
        
        for(int i=0; i<r;i++){
            for(int j=0; j<c; j++){
                if(grid[i][j]==1)
                    mx=max(mx,dfs(grid,i,j));
            }
        }
        return mx;
    }
};