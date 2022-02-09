// https://www.interviewbit.com/problems/majority-element/


int Solution::majorityElement(const vector<int> &A) {

     unordered_map<int, int> freq;
    for(int i = 0; i < A.size(); i++){
        freq[A[i]]++;
    }
    int f = 0, ind = 0, ans;
    for(auto x : freq){
        if(f < x.second){
            f = x.second;
            ans = x.first;
        }
    }
    return ans;
    
}
