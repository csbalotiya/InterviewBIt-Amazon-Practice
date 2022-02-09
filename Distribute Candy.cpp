// https://www.interviewbit.com/problems/distribute-candy/


int Solution::candy(vector<int> &A) {
    
    int n = A.size();
    int arr[n];
  
    for(int i = 0 ;i < n; i++)
        arr[i] = 1;
        
    int c = 1 , ans = 0;
    for(int i = 1; i < n; i++){
        if(A[i-1] < A[i]){
            arr[i] = arr[i-1]+1;
        }
    }
    for(int i = n-1; i > 0; i--){
        if(A[i-1] > A[i]){
            arr[i-1] = arr[i]+1;
        }
    }
    for(int i = 1; i < n-1; i++){
        if(A[i-1] < A[i] && A[i] > A[i+1]){
            arr[i] = max(arr[i-1], arr[i+1])+1;
        }
    }
    
    for(int i = 0 ;i < n; i++)
        ans += arr[i];
        
    return ans;
}
