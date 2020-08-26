//https://leetcode.com/problems/surrounded-regions/

class Solution
{
public:
    void dfshelper(vector<vector<char>>& board,int r,int c)
    {
        if(board[r][c] != 'O')
            return;
        board[r][c] = 'B';
        if(r>0)
            dfshelper(board,r-1,c);
        if(c>0)
             dfshelper(board,r,c-1);
        if(r < board.size()-1 )
             dfshelper(board,r+1,c);
        if(c < board[0].size()-1 )
             dfshelper(board,r,c+1);
    }
    void solve(vector<vector<char>>& board)
    {
        if(board.size() == 0)
            return;
        for(int i = 0; i < board[0].size();i++)
            if(board[0][i] == 'O')
                dfshelper(board,0,i);
        for(int i = 0; i < board.size();i++)
            if(board[i][board[0].size()-1] == 'O')
                dfshelper(board,i,board[0].size()-1);
        for(int i = 0; i < board[0].size();i++)
            if(board[board.size()-1][i] == 'O')
                dfshelper(board,board.size()-1,i);
        for(int i = 0; i < board.size();i++)
            if(board[i][0] == 'O')
                dfshelper(board,i,0);
        for(int i = 0; i < board.size(); i++)
            for(int j = 0; j < board[0].size(); j++)
            {
                if(board[i][j] == 'O')
                    board[i][j] = 'X';
                if(board[i][j] == 'B')
                    board[i][j] = 'O';
            }
    }
};