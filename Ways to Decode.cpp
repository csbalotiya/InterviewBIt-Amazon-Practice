//https://www.interviewbit.com/problems/ways-to-decode/discussion/p/dp-easy-solution/60712/392

#define ll long long

int Solution::numDecodings(string s)
{
  int n=s.size();
  ll dp[n+1];
  memset(dp,0,sizeof(dp));
  ll mod=1000000007;
  dp[0]=1;
  dp[1]= s[0]=='0'?0:1;
  for(int i=2;i<=n;i++)
  {
      if(((int)(s[i-1]-'0')+10*(int)(s[i-2]-'0')<=26)&&((int)(s[i-1]-'0')+10*(int)(s[i-2]-'0')>=10))
        {
            dp[i]+=(dp[i-2]);
            dp[i]%=mod;
        }       
        if((int)(s[i-1]-'0')>=1)
        {dp[i]+=dp[i-1];
        dp[i]%=mod;
        }
       
        
  }
  return dp[n]%mod;

}
