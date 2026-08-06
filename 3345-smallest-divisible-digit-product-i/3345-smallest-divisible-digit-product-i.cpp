class Solution {
public:
    int smallestNumber(int n, int t) {
        
        int count=0;
        while(count<1){
            int dig1=n%10;
            int dig2=(n/10);
            if(n==100){
                count++;
            }
            if(n<10){
                dig1=n;
                dig2=1;
            }
            if((dig1*dig2)%t==0){
                count++;
            }
            else{
                n++;
            }
        }
        return n;
        
    }
};