// https://www.interviewbit.com/problems/min-jumps-array/

int Solution::jump(vector<int> &A)
{
    if(A.size()==1)
    {
        return 0;
    }
    int jump=A[0];
    int max_jump=A[0];
    int count=1;
    int n=A.size();
    for(int i=1;i<=min(n-1,max_jump);i++)
    {
        max_jump=max(max_jump,i+A[i]);
        if(i==n-1)
        {
            return count;
        }
        if(jump==i)
        {
            jump=max_jump;
            count++;
        }
    }
    return -1;
}
