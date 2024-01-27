class Solution {
public:
    bool CanAttack(int x,int y,int moves,vector<vector<char>> board){
        if(board[x][y] == 'k'){
            return 1;
        }
        if(moves > 0) return 0;
        int tempx = 0;
        int tempy = 0;
        // up
        tempx = x-1;
        while(tempx >= 0){
            if(board[tempx][y] == 'q') break;
            if(CanAttack(tempx,y,ix,iy)) return true;
            tempx--;
        }
        tempx = x+1;
        while(tempx < 8){
            if(board[tempx][y] == 'q') break;
            if(CanAttack(tempx,y,ix,iy)) return true;
            tempx++;
        }
        tempy = y+1;
        while(tempy < 8){
            if(board[x][tempy] == 'q') break;
            if(CanAttack(x,tempy,ix,iy)) return true;
            tempy++;
        }
        tempy = y-1;
        while(tempy >= 0){
            if(board[x][tempy] == 'q') break;
            if(CanAttack(x,tempy,ix,iy)) return true;
            tempy--;
        }
        tempx = x-1;
        tempy = y+1;
        while(tempx >= 0 && tempy < 8){
            if(board[tempx][tempy] == 'q') break;
            if(CanAttack(tempx,tempy,ix,iy)) return true;
            tempx--;
            tempy++;
        }
        tempx = x+1;
        tempy = y+1;
        while(tempx < 8 && tempy < 8){
            if(board[tempx][tempy] == 'q') break;
            if(CanAttack(tempx,tempy,ix,iy)) return true;
            tempx++;
            tempy++;
        }
        tempx = x+1;
        tempy = y-1;
        while(tempx < 8 && tempy >= 0){
            if(board[tempx][tempy] == 'q') break;
            if(CanAttack(tempx,tempy,ix,iy)) return true;
            tempx++;
            tempy--;
        }
        tempx = x-1;
        tempy = y-1;
        while(tempx >= 0 && tempy >= 0){
            if(board[tempx][tempy] == 'q') break;
            if(CanAttack(tempx,tempy,ix,iy)) return true;
            tempx--;
            tempy--;
        }
        tempx = x-1;
        tempy = y+1;
        while(tempx < 8 && tempy >= 0){
            if(board[tempx][tempy] == 'q') break;
            if(CanAttack(tempx,tempy,moves+1,board)) return true;
            tempx--;
            tempy++;
        }
        return false;
    }  
    vector<vector<int>> queensAttacktheKing(vector<vector<int>>& queens, vector<int>& king) {
        vector<vector<char>> board(8,vector<char>(8,'.'));
        vector<vector<int>> ans;
        for(auto &it : queens){
            board[it[0]][it[1]] = 'q';
        }
        board[king[0]][king[1]] = 'k';
        for(auto &it : queens){
            if(CanAttack(it[0],it[1],0,board)){
                ans.push_back({it[0],it[1]});
            }
        }
        return ans;
    }
};