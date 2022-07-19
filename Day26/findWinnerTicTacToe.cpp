/*
1275. Find Winner on a Tic Tac Toe Game

Link: https://leetcode.com/problems/find-winner-on-a-tic-tac-toe-game/
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long

class Solution {
public:
    bool isWinner(vector<vector<int>> &board, int flag, int row, int col){
        if(board[row][0]==flag && board[row][1]==flag && board[row][2]==flag)return true;
        
        if(board[0][col]==flag && board[1][col]==flag && board[2][col]==flag)return true;
        
        if(board[0][0]==flag && board[1][1]==flag && board[2][2]==flag){
            return true;
        }
        if(board[2][0]==flag && board[1][1]==flag && board[0][2]==flag){
            return true;
        }
        return false;
    }
    
    string tictactoe(vector<vector<int>>& moves) {
        
        vector<vector<int>> board(3,vector<int>(3,0));
        int n = moves.size();
       

        
        for(int i=0;i<n;i+=2){
            int r = moves[i][0];
            int c= moves[i][1];
            board[r][c]=1;
        }
        
        
        for(int i=1;i<n;i+=2){
            int r = moves[i][0];
            int c= moves[i][1];
            board[r][c]=-1;
        }
       
        
        if(n%2){
            if(isWinner(board,1,moves[n-1][0], moves[n-1][1]))return "A";
            else if(n==9)return "Draw";
            else return "Pending";
            } 
        else {
            if(isWinner(board,-1,moves[n-1][0], moves[n-1][1]))return "B";
            
            else return "Pending";
        }
        return "Draw";
    }
};

int main()
{
    
    return 0;
}