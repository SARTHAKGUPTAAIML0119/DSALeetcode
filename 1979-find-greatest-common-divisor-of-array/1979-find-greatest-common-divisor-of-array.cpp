class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int small = nums[0];
        int large = nums.back(); 
        int gcd = 1; 
        for (int i = 1; i <= small; i++) {
            if (small % i == 0 && large % i == 0) {
                gcd = i;  
            }
        }
        return gcd;
    }
};