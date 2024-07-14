//here the logic is to first find the overlapping subproblems, in a way this question is just another variation of the fibonacci series questions 
class Solution {
public:
    int dp[101][101]; 
    int helper(int m,int n)
    {
        if(m==1&&n==1)return 1;
        if(m==0||n==0)return 0;
        if(dp[m][n]!=0) return dp[m][n];
        return dp[m][n]=helper(m-1,n)+helper(m,n-1);
    }
    int uniquePaths(int m, int n) 
    {
        return helper(m,n);
    }
};
