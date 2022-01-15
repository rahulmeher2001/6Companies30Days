class Solution {
	public:
	    
		int CountWays(string str){
		    // Code here
		    int count=0;
		    int back=0;
		    const int mod=1e9+7;
		    int l=str.length();
		    int dp[l+1]={0};
		    if(str[0]=='0')
		    {
		        return 0;
		    }
		    dp[0]=1;
		    for(int i=0;i<l-1;i++)
		    {
		        if(str[i]=='0'&&str[i+1]=='0')
		        {
		            return 0;
		        }
		    }
		    for(int i=0;i<l;i++)
		    {
		        if(str[i]=='0')
		        {
		            continue;
		        }
		        dp[i+1]=(dp[i]+dp[i+1])%mod;
		        if(i<=l-1)
		        {
		            if(str[i]=='1'||(str[i]=='2'&&str[i+1]<'7'))
		            {
		                dp[i+2]=(dp[i]+dp[i+2])%mod;
		            }
		        }
		    }
		    return dp[l];
		}

};
