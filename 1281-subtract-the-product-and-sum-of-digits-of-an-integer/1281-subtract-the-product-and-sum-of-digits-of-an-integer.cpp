class Solution {
public:
    int subtractProductAndSum(int n) {
        
        int p=1;
        int sum=0;
        int t;
        while(n>0){
            t=n%10;
            p*=t;
            sum+=t;
            n/=10;
        }
        return p-sum;
    }
};