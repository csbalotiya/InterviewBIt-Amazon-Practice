// https://www.interviewbit.com/problems/edit-distance/

int dp[451][451];
int fun(string A, string B, int i, int j){
    if(i == A.size())   return B.size()-j;
    if(j == B.size())   return A.size()-i;
    if(dp[i][j] != -1)
        return dp[i][j];
    if(A[i] == B[j])
        return dp[i][j] = fun(A,B,i+1,j+1);
    
    int p = fun(A,B,i+1,j);
    int q = fun(A,B,i,j+1);
    int r = fun(A,B,i+1,j+1);
    
    return dp[i][j] = 1+min(p, min(q,r));
}
int Solution::minDistance(string A, string B) {
    memset(dp,-1,sizeof(dp));
    return fun(A,B,0,0);
}
