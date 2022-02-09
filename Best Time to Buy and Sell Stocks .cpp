// https://www.interviewbit.com/problems/best-time-to-buy-and-sell-stocks-i/

int Solution::maxProfit(const vector<int> &A) {

    int ans = 0, temp = INT_MAX;
    for(int i = 0; i < A.size(); i++){

        temp = min(A[i], temp);
        ans =  max(ans, A[i] - temp);
    }
    return ans;
}
