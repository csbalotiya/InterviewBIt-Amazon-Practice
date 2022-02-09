
// https://www.interviewbit.com/problems/max-product-subarray/

int Solution::maxProduct(const vector<int> &A) {
    
    int n = A.size();
    int tillnow = INT_MIN, prodmx = 1 , prodmn = 1;
    for(int i = 0; i < n; i++){
        if(A[i] < 0)
            swap(prodmx, prodmn);
        prodmx = max(prodmx*A[i], A[i]);
        prodmn = min(prodmn*A[i], A[i]);
        tillnow = max(tillnow, prodmx);
    }
    return tillnow;
}
