//https://www.interviewbit.com/problems/best-time-to-buy-and-sell-stocks-ii/submissions/

int Solution::maxProfit(const vector<int> &A) {
    
    if(A.size() == 0) return 0;
    int ans = 0;
    for(int i = 0; i < A.size()-1; i++){

        if(A[i+1] >A[i])
            ans +=  A[i+1] - A[i];
    }
    return ans;
}
