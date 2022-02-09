// https://www.interviewbit.com/problems/longest-increasing-subsequence/

int Solution::lis(const vector<int> &nums) {
    
    int n = nums.size();
    vector<int> ans;
    for(int i =0 ; i < n; i++){
        auto idx = lower_bound(ans.begin(), ans.end(), nums[i]) ;
        if(idx != ans.end())
            *idx = nums[i];
        else
            ans.push_back(nums[i]);
    }
    return ans.size();
}
