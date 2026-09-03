class Solution {
public:
    // int rob(vector<int>& nums) {
    //     long long sum1=0;
    //     long long sum2=0;
    //     for(int i=0;i<nums.size();i+2){
    //         sum1+=nums[i];
    //     }
    //     for(int i=1;i<nums.size();i+2){
    //         sum2+=nums[i];
    //     }
    //     return max(sum1,sum2);
    // }

    int robmaxmoney(int n,vector<int> &nums, vector<int> &dp){
        if(n<0) return 0;
        if(n==0) return dp[0]=nums[0];
        if(dp[n]!=-1) return dp[n];
        int robcurrentindex=nums[n]+robmaxmoney(n-2,nums,dp);
        int skipcurrentindex=robmaxmoney(n-1,nums,dp);
        return dp[n]=max(robcurrentindex,skipcurrentindex);
    }
   
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n,-1);
        return robmaxmoney(n-1,nums,dp);
    }


};