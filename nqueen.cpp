#include <bits/stdc++.h>
using namespace std;

#define ll long long
bool isafe(vector<vector<int>> &board, int row ,int col , int n ){
    for(int  i = 0 ; i <n ; i++){
        if(board[i][col]==1){
            return false ;
        }
    }
    for(int j = 0 ; j < n ; j++){
        if(board[row][j]==1){
            return false ;
        }
    
    }
    for(int i = row,j=col ; i>=0 && j>=0 ; i-- , j--){
        if(board[i][j]==1){
            return false ;
        }
    }
    for(int i = row,j=col ; i>=0 && j<n ; i-- , j++){
        if(board[i][j]==1){
            return false ;
        }
    }
    return true ;
}
void nqueen(vector<vector<int>> &board,int n , int row){
  if(row == n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << board[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "\n";
    return;
}
    for(int j = 0 ; j < n ;j++){
        if(isafe(board,row,j,n)){
            board[row][j]=1 ;
            nqueen(board,n,row+1);
            board[row][j]=0;
        }
    
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n ; 
    cin>> n ; 
    vector<vector<int>> board(n,vector<int>(n,0)) ;
    nqueen(board,n,0);

}

