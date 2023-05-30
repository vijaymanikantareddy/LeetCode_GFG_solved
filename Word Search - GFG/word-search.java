//{ Driver Code Starts
import java.util.*;
import java.lang.*;
import java.io.*;
class GFG
{
    public static void main(String[] args) throws IOException
    {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int T = Integer.parseInt(br.readLine().trim());
        while(T-->0)
        {
            String[] S = br.readLine().trim().split(" ");
            int n = Integer.parseInt(S[0]);
            int m = Integer.parseInt(S[1]);
            char [][] board = new char[n][m];
            for(int i = 0; i < n; i++){
                String[] s = br.readLine().trim().split(" ");
                for(int j = 0; j < m; j++){
                    board[i][j] = s[j].charAt(0);
                }
            }
            String word = br.readLine().trim();
            Solution obj = new Solution();
            boolean ans = obj.isWordExist(board, word);
            if(ans)
                System.out.println("1");
            else
                System.out.println("0");
       }
    }
}
// } Driver Code Ends


class Solution
{
    boolean dfs(char[][] board, boolean[][] vis, int row, int col, int index, String word){
        if(index == word.length()){
            return true;
        }
        vis[row][col] = true;
        int n = board.length;
        int m = board[0].length;
        int rows[] = {-1, 1, 0, 0};
        int cols[] = {0, 0, 1, -1};
        for(int i = 0 ; i < 4 ; i++){
            int nrow = row+rows[i];
            int ncol = col+cols[i];
            if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && index < word.length() && board[nrow][ncol] == word.charAt(index) && !vis[nrow][ncol]){
                if(dfs(board, vis, nrow, ncol, index+1, word)){
                    return true;
                }
            }
        }
        vis[row][col]= false;
        return false;
    }
    public boolean isWordExist(char[][] board, String word)
    {
        // Code here
        int n = board.length;
        int m = board[0].length;
        boolean [][] vis = new boolean[n][m];
        for(int row = 0 ; row < n ; row++){
            for(int col = 0 ; col < m ; col++){
                if(board[row][col] == word.charAt(0) && !vis[row][col]){
                   if(dfs(board, vis, row, col, 1, word)){
                       return true;
                   }
                }
            }
        }
        return false;
    }
}