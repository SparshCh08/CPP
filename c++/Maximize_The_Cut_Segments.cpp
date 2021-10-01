int maximizeTheCuts(int n, int x, int y, int z)
    {
        int dp[n+1];
        memset(dp,0,sizeof(dp));
        dp[0]=1;
        for(int i=1;i<=n;i++)
        {
            int temp=0;
            if(i>=x&&dp[i-x])
                temp=max(dp[i-x]+1,temp);
            if(i>=y&&dp[i-y])
                temp=max(dp[i-y]+1,temp);
            if(i>=z&&dp[i-z])
                temp=max(dp[i-z]+1,temp);
            dp[i]+=temp;
        }
        return max(0,dp[n]-1);
    }
