class Solution {
public:
    string stoneGameIII(vector<int>& stoneValue) {
        int n = stoneValue.size();
        vector<int> dp(n + 1, 0);

        for (int i = n - 1; i >= 0; i--) {
            int sum = 0;
            int maxAdvantage = INT_MIN;

            for (int k = 1; k <= 3 && i + k <= n; k++) {
                sum += stoneValue[i + k - 1]; 
                maxAdvantage = max(maxAdvantage, sum - dp[i + k]);
            }

            dp[i] = maxAdvantage;
        }
            
        
        if(dp[0]>0){
            return "Alice";
        }
        else if(dp[0]<0){
            return "Bob";
        }
        else{
            return "Tie";
        }
    }
};