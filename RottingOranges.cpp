class Solution {
public:
    void checkNeighbour(queue<pair<int,int>> &q, vector<vector<int>> &grid, pair<int,int> curr){
        
        // Left Right Up Down
        int x[] = {-1,1,0,0};
        int y[] = {0,0,-1,1};
        
        for(int i=0;i<4;i++){
                int Xcord = curr.first+x[i];
                int Ycord = curr.second+y[i];
                if(Xcord<0 || Xcord>=grid.size()
                || Ycord<0 || Ycord>=grid[0].size()
                || grid[Xcord][Ycord]!=1){
                    continue;
                }        
            grid[Xcord][Ycord] = 2;
            q.push({Xcord,Ycord});
        }
    }
    
    int orangesRotting(vector<vector<int>>& grid) {
        queue<pair<int,int>> q;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j] == 2){
                    q.push({i,j});
                }
            }
        }
        
        int time = 0;
        
        while(q.size()>0){
            int count = q.size();
            while(count>0){
                pair<int,int> top = q.front();
                q.pop();
                checkNeighbour(q,grid,top);
                count--;
            }
            time++;
        }
        
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if(grid[i][j] == 1){
                    return -1;
                }
            }
        }
        if(time>0)
            return time-1;
        
        return time;
    }
};
