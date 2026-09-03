class Solution {
public:
    // long long climbStairs(long long n) {
    //     if(n<=2) return n;
    //     return climbStairs(n-1)+climbStairs(n-2);        
    // }

    int helper(int n,vector<int> &dp){
        if(n<=2) return n;
        if(dp[n]!=-1) return dp[n];
        return dp[n]=helper(n-1,dp)+helper(n-2,dp);
    }

    int climbStairs(int n){
        vector<int>dp(n+1,-1);
        return helper(n,dp);
    }
};