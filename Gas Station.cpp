// https://www.interviewbit.com/problems/gas-station/

int Solution::canCompleteCircuit(const vector<int> &A, const vector<int> &B) {

    int ans = 0,cost = 0,total = 0;
    for(int i = 0; i < A.size(); i++){
        cost += A[i] - B[i];
        if(cost < 0){
            ans = i+1;
            total += cost;
            cost = 0;
        }
    }
    if(total + cost < 0 ) return -1;
    return ans;
}
